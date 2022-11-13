//Anjali Shiyamsaran
//S.O.S. Morse Code LED Blinking

int ledPin = 13;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void flash(int duration)
{
  digitalWrite(ledPin, HIGH); // turn the LED on
  delay(duration);
  digitalWrite(ledPin, LOW); // turn the LED off by making the voltage LOW
  delay(duration);
}

void loop()
{
  flash(200); flash(200); flash(200); //short blink three times
  delay(300);
  flash(500); flash(500); flash(500); //longer blink three times
  flash(200); flash(200); flash(200); //short blink three times
  delay(1000);
}
