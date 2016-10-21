
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
  x = analogRead(Eje_X);
  y = analogRead(Eje_Y);
  Serial.print("X = ");
  Serial.print(x);
  Serial.print(" Y = ");
  Serial.println(y);
  if(x < 400)
    angulo = angulo - 3;
  else if(x > 600)
    angulo = angulo + 3;
}
