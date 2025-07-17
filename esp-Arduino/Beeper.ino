int buzzer = 7;

void setup() {

}

void loop() {

 int i = 0;

  do{
    i++;
    tone(buzzer,800);
    delay(500);
    noTone(buzzer);
    delay(500);
  }
  while(i<2);

  delay(3000);
      }