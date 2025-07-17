int redPin=9;
int greenPin=10;
int bluePin=11;

void setup()
{

pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}

void loop()
{
  setColor(1,0,0);
  delay(1000);
  setColor(50,0,0);
  delay(1000);
  setColor(140,0,0);
  delay(1000);
  setColor(255,0,0);
  delay(1000);
  setColor(0,255,0);
  delay(1000);
  setColor(0,0,255);
  delay(1000);
  setColor(255,255,0);
  delay(1000);
  setColor(80,0,80);
  delay(1000);
  setColor(255,50,0);
  delay(1000);
}