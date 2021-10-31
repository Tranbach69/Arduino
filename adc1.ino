const byte ledPin1 = 11;
const byte ledPin2 = 10;


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  int adc = analogRead(A0); // digitalRead
  int Pwm = map(adc, 0, 1023, 0, 255); //
  analogWrite(ledPin1, Pwm);
  analogWrite(ledPin2, 255 - Pwm);

  // put your main code here, to run repeatedly:

}
