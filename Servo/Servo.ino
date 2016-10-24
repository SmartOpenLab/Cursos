#include <Servo.h>

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(9); //Indicamos que el pin del servo es el numero 9
}

void loop() {
  // put your main code here, to run repeatedly:

  //de 0 a 180º incrementando cada segundo 10 grados
  for(int i=0;i<180;i=i+10){
    myservo.write(i);
    delay(1000);
  }

  //ir al 90º durante 2 segundos
  myservo.write(90);
  delay(2000);

  //ir a 45º durante 100ms (para ver el movimiento)
  myservo.write(45);
  delay(100);

  //ir a 135º durante 100ms (para ver el movimiento)
  myservo.write(135);
  delay(100);
}
