#include <Servo.h>

int angulo = 90;
int Eje_X = A1;
int Eje_Y = A2;
int Pin_Servo = 6;
float movimiento = 5;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  pinMode(Eje_X, INPUT);
  pinMode(Eje_Y, INPUT);
  myservo.attach(Pin_Servo);  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(Eje_X);
  int y = analogRead(Eje_Y);
  Serial.print("X = ");
  Serial.print(x);
  Serial.print(" Y = ");
  Serial.print(y);
  Serial.print(" velocidad = ");
  Serial.print(movimiento);
  Serial.print(" Angulo: ");
  Serial.println(myservo.read());
  
  if(y < 400)
    angulo = constrain(angulo - movimiento,0,180);
  else if(y > 600)
    angulo = constrain(angulo + movimiento,0,180);
  if(x < 300)
    movimiento = constrain(movimiento + 0.05,0.05,10);
  else if(x > 800)
    movimiento = constrain(movimiento - 0.05,0.05,10);
  myservo.write(angulo);
  delay(333);
}
