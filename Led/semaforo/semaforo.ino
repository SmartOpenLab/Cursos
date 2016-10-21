
int White_Led = 6;
int Red_Led = 3;
int Yellow_Led = 4;
int Green_Led = 5;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(White_Led, OUTPUT);
  pinMode(Red_Led, OUTPUT);
  pinMode(Yellow_Led, OUTPUT);
  pinMode(Green_Led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(Red_Led, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(White_Led,HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1500);                       // wait for a second
  digitalWrite(White_Led,LOW);   // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
  digitalWrite(Red_Led, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second
  digitalWrite(Green_Led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for a second
  digitalWrite(Green_Led, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second
  digitalWrite(Yellow_Led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(Yellow_Led, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second
}
