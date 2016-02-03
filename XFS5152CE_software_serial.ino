
#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); // RX, TX
void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() // run over and over
{
  byte aa[] = {0xFD, 0x00, 0x05, 0x01, 0x01, 0x31, 0x32, 0x34};
  int i;
  for (i = 0; i < sizeof(aa); i ++) {
    mySerial.write(aa[i]);
  }
  Serial.println(digitalRead(8));//pin 8 连ready脚
  delay(2000);
  Serial.println(digitalRead(8));
  delay(1000);
  Serial.println("end");
}

