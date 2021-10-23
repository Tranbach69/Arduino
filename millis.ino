unsigned long time1 = 0;
unsigned long time2 = 0; // 0 1 2 3 4 ....
byte ledPin1 = 3;
byte ledPin2 = 4;
void setup() {
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  time1 = millis();   //0
  Serial.begin(9600);
}
void loop() {
  time1=millis();
  Serial.println(time1);
  delay(500);
//  if((unsigned long)(millis()-time1)>500)  // 502-0
//{
//  if(digitalRead(ledPin1)==0)
//  {
//    digitalWrite(ledPin1,HIGH);
//  }
//  else
//  {
//    digitalWrite(ledPin1,LOW);
//  }
// time1=millis();
//}
//if((unsigned long)(millis()-time2)>1000)  // 502-0
//{
//  if(digitalRead(ledPin2)==0)
//  {
//    digitalWrite(ledPin2,HIGH);
//  }
//  else
//  {
//    digitalWrite(ledPin2,LOW);
//  }
// time2=millis();
//}
//digitalWrite(ledPin1,HIGH);
//delay(500);
//digitalWrite(ledPin1,LOW);
//delay(500);

}
