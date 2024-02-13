const String command = "AT+";
const int pause = 500; // msec
byte count = 0;
void setup() {
 Serial.begin(9600);
 pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
   for (int i = 0; i <= 10; ++i) {
    Serial.print(command);
    Serial.print(count++);
    Serial.print("\r\n");
    delay(pause);
  }

  // После 10 итераций
  digitalWrite(LED_BUILTIN, HIGH);
  delay(pause);
  digitalWrite(LED_BUILTIN, LOW);

 
}