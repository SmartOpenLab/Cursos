
int angulo = 90;
int Eje_X = A1;
int Eje_Y = A2;
int x = 0;
int y = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(Eje_X, INPUT);
  pinMode(Eje_Y, INPUT);  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Leemos las señales del eje X e Y
  x = analogRead(Eje_X);
  y = analogRead(Eje_Y);

  //Mostramos la cardinalidad del joystick
  if(x<400)
    Serial.println("Oeste");
  else if(x>600)
    Serial.println("Este");
  if(y<400)
    Serial.println("Sur");
  else if(y>600)
    Serial.println("Norte");
}
