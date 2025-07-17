#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

const int solarPin = A0;
const int batteryPin = A1;
const int diodePin = 2;

const int batteryCapacity = 1200; // mAh
const int chargingCurrent = 500; // mA
const int batteryVoltage = 3.7; // V

void setup() {
  pinMode(solarPin, INPUT);
  pinMode(batteryPin, INPUT);
  pinMode(diodePin, OUTPUT);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.display();
  delay(2000);
  display.clearDisplay();
}

void loop() {
  int solarVoltage = analogRead(solarPin) * (5.0 / 1023.0); // convert to volts
  int batteryVoltage = analogRead(batteryPin) * (5.0 / 1023.0); // convert to volts

  // Calculate charging current
  int chargingVoltage = solarVoltage - batteryVoltage;
  int chargingCurrent = (chargingVoltage / 0.5) * 1000; // convert to mA

  // Charge the battery if it's not full and there's enough voltage from the solar panel
  if (chargingCurrent > 0 && batteryVoltage < batteryCapacity) {
    digitalWrite(diodePin, HIGH);
  } else {
    digitalWrite(diodePin, LOW);
  }

  // Display the data on the OLED screen
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.print("Solar Voltage: ");
  display.print(solarVoltage);
  display.println("V");
  display.print("Battery Voltage: ");
  display.print(batteryVoltage);
  display.println("V");
  display.print("Charging Current: ");
  display.print(chargingCurrent);
  display.println("mA");
  display.display();

  delay(1000);
}
