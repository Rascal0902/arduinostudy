#include<SoftwareSerial.h>
#define BT_RXD 8
#define BT_TXD 7
SoftwareSerial bluetooth(BT_RXD,BT_TXD);
void setup()
{
  pin
  Serial.begin(9600);
  bluetooth.begin(9600);
  Serial.write(0);
}
void loop()
{
  if(Serial.available()) bluetooth.write(Serial.read());
  if(bluetooth.available()) {
    Serial.write(bluetooth.read());
    
  }
}
