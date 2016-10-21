#include <Servo.h>

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.attach(9);
  myservo.write(190);
  delay(1000);
  Serial.print(myservo.read());
  Serial.println();
  myservo.write(100);
  delay(1000);
  Serial.print(myservo.read());
  Serial.println();
  myservo.write(190);
  delay(1000);
  Serial.print(myservo.read());
  Serial.println();
  myservo.detach();
  delay(1000);
}
