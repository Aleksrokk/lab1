const String command = "AT+";
const int pause = 200;
byte count = 0;
void setup() 
{
 Serial.begin(9600);
}
void loop() 
{
  Serial.print(command);
  Serial.print(count++);
  Serial.print("\r\n");
  delay(pause);
  if (count == 255) 
{
  count = 0;
}
}