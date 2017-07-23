#include <SoftwareSerial.h>
SoftwareSerial RFID(10, 11);
void setup() 
{
Serial.begin(9600);
RFID.begin(9600);
}
void loop()  
{
int index =0 ;  
char unit;
String msg;
while(RFID.available()>0)
 {
  unit = RFID.read();
  index++;
  msg += unit;
  if(index == 12) 
  {
   Serial.print("Tag ID: ");
   Serial.println(msg);
  } 
 
 }
 
}
