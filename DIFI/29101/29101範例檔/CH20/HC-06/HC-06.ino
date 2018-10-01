void setup()
{
   Serial.begin(9600);         // HC-06的初始鮑率
   delay(6000);
   Serial.write("AT+BAUD8");   // 設定鮑率為115200
}

void loop()
{
  if (Serial.available())
    Serial.write(Serial.read());
}
