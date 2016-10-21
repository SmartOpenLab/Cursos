#include <Servo.h>

int angulo = 90;
int Eje_X = A1;
int Eje_Y = A2;
int Pin_switch = 11;//TODO hacer el switch
int Pin_Servo = 6;
int x = 0;
int y = 0;
float movimiento = 5;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  pinMode(Eje_X, INPUT);
  pinMode(Eje_Y, INPUT);
  pinMode(Pin_switch, INPUT);
  myservo.attach(Pin_Servo);  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(Eje_X);
  y = analogRead(Eje_Y);
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
//  if(digitalRead(Pin_switch) == LOW)
  //  angulo = 90;
  myservo.write(angulo);
  delay(333);
}
