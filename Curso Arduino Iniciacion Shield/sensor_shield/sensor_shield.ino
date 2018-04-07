//Botones
#define SW1 2
#define SW2 3

//LEDs rojo y azul
#define LED1 13
#define LED2 12

//El LED RGB parece estar mal, no funciona
//#define RGB_LEDR 9
//#define RGB_LEDG 10
//#define RGB_LEDB 11

//Potenciómetro
#define POT A0

//Sensor de Luz, LDR
#define LDR A1

//Buzzer, motor vibrador
#define BUZZ 5

//Sensor de temperatura 1
#define LM35 A2 //ACCURATE TEMP

//Sensor de temperatura y humedad
#define DHT11 4 //HUM_TEMP

int potReading;
int LDRReading;

#include <SimpleDHT.h>
SimpleDHT11 TempHumSensor;
byte temperature = 0;
byte humidity = 0;

void setup() {
  Serial.begin(9600);

  pinMode (SW1, INPUT_PULLUP); //Para que funcionen en modo normal, si INPUT 0 sería encendido y 1 apagado
  pinMode (SW2, INPUT_PULLUP);

  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);

  //  pinMode (RGB_LEDR, OUTPUT);
  //  pinMode (RGB_LEDG, OUTPUT);
  //  pinMode (RGB_LEDB, OUTPUT);

  pinMode (POT, INPUT);

  pinMode (LDR, INPUT);

  pinMode (BUZZ, OUTPUT);

  pinMode (LM35, INPUT);

  pinMode (DHT11, INPUT);
}

void loop() {
  /******** EJEMPLO BOTÓN (y Serial) **********/
  Serial.print("Estado del botón 1: ");
  if (digitalRead(SW1))
    Serial.println("¡Estoy encendido :-) !");
  else
    Serial.println("Estoy apagado :-(");
  /********************************************/

  /******** EJEMPLO BOTON (y LED) *************/
  digitalWrite(LED1, digitalRead(SW1)); //Enciende el LED1 (AZUL) cuando se presiona el botón 1
  /********************************************/


  /******** EJEMPLO POTENCIOMETRO *************/
  Serial.print("Valor del potenciómetro: ");
  potReading = analogRead(POT);
  Serial.println(potReading);
  if (potReading > 1000)
    Serial.println("Soy el potenciómetro y estoy a tope!");
  /********************************************/

  /******** EJEMPLO Luminosidad/LDR ***********/
  Serial.print("Valor del LDR: ");
  LDRReading = analogRead(LDR);
  Serial.println(LDRReading);
  if ((analogRead(LDR) < 100) && (digitalRead(SW2)))
    digitalWrite(LED2, HIGH);
  else
    digitalWrite(LED2, LOW);
  /********************************************/


  /******** EJEMPLO BUZZER (y potenciometro) **/
  if (potReading < 50)
    playMelody(); //internamente usa tone y notone, funciones estandar de arduino 
  /********************************************/


  //  if (digitalRead(SW1))
  //    digitalWrite(RGB_LEDR, 255);
  //  if (digitalRead(SW2))
  //    digitalWrite(RGB_LEDG, 255);
  //  analogWrite(RGB_LEDB, 255);
  //
  //  delay(1000);
  //  SetRGBLED(10,120,250);

  /******** EJEMPLO TEMPERATURA ANALÓGICA ****/
  Serial.println ( (5.0 * analogRead(LM35) * 100.0) / 1024 ); //Convertir de valores de voltaje a valor numérico
  /********************************************/

  /******** EJEMPLO TEMPERATURA ANALÓGICA ****/
  //Usa la librería SimpleDHT (sale en el gestor de librerías del IDE de arduino al buscar) --> https://github.com/winlinvip/SimpleDHT
  int err = SimpleDHTErrSuccess;
  if ((err = TempHumSensor.read(DHT11, &temperature, &humidity, NULL)) == SimpleDHTErrSuccess) {
    Serial.print((int)temperature);
    Serial.print("ºC, ");
    Serial.print((int)humidity);
    Serial.println("% Humedad");
  }
  /********************************************/

  Serial.println();
  delay(1000);
}

//void SetRGBLED(byte R, byte G, byte B){
//  analogWrite(9 , RGB_LEDR) ;   // Rojo
//  analogWrite(10, RGB_LEDG) ;   // Green - Verde
//  analogWrite(11, RGB_LEDB) ;   // Blue - Azul
//}


void playMelody(){
  int numTones = 10;
  int tones[ ] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494};
  // mid C C# D D# E F F# G G# A

  for (int i = 0; i < numTones; i++) {
    tone(BUZZ, tones[i]);
    delay(500);
  }
  noTone(BUZZ);
}
