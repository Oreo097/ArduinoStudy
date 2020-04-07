#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include<Arduino.h>

#define ARDUINO 101

RF24 radio(8,9);
void setup() {
   radio.begin();
  radio.setChannel(1);
  radio.openWritingPipe(0xF0F0F0F0AA);
  Serial.begin(9600);
}
void loop() {
  char a='1';
  radio.write(&a,sizeof(a));
  Serial.println("finsh");
}
