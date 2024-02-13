const String command = "AT+";
const int pause = 200; 
byte count = 0;
int lampState = HIGH; 

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  
  Serial.begin(9600);  
}

void loop() {
  for (int i = 0; i < 10; ++i) {
    
    Serial.print(command);
    Serial.print(count++);
    Serial.print("\r\n");
    delay(pause);
  }

  digitalWrite(LED_BUILTIN, lampState); 
  delay(pause);

  lampState = (lampState == HIGH) ? LOW : HIGH;
}
