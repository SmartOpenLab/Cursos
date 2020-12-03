const int EchoPin = 5;
const int TriggerPin = 6;
const int LedPin = 13;
 
void setup() {
  Serial.begin(9600);
  pinMode(LedPin, OUTPUT);
  pinMode(TriggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
}
 
void loop() {
  //obtención de la posición del objeto 
  int cm = ping(TriggerPin, EchoPin);
  
  //Distancia alejada
  if(cm > 25){
    digitalWrite(LedPin,HIGH);
    delay(10);
    digitalWrite(LedPin,LOW);
    delay(10);
    digitalWrite(LedPin,HIGH);
    delay(10);
    digitalWrite(LedPin,LOW);
    delay(10);

  }
  //Distancia intermedia
  else if(cm > 10 && cm < 25){
    digitalWrite(LedPin,HIGH);
    delay(5);
    digitalWrite(LedPin,LOW);
    delay(5);
    digitalWrite(LedPin,HIGH);
    delay(5);
    digitalWrite(LedPin,LOW);
    delay(5);
  }
  else{
    digitalWrite(LedPin,HIGH);
  }
  delay(100);
}
 
int ping(int TriggerPin, int EchoPin) {
  long duration, distanceCm;
  
  digitalWrite(TriggerPin, LOW);  //para generar un pulso limpio ponemos a LOW 4us
  delayMicroseconds(4);
  digitalWrite(TriggerPin, HIGH);  //generamos Trigger (disparo) de 10us
  delayMicroseconds(10);
  digitalWrite(TriggerPin, LOW);
  
  duration = pulseIn(EchoPin, HIGH);  //medimos el tiempo entre pulsos, en microsegundos
  
  distanceCm = duration * 10 / 292/ 2;   //convertimos a distancia, en cm
  return distanceCm;
}
