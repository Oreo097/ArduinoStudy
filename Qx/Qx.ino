#include <nRF24L01.h>
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include<Arduino.h>
RF24 radio(8,9);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  radio.begin();
  radio.setChannel(1);
  radio.openReadingPipe(1,0xF0F0F0F0AA);
  radio.startListening();
}

void loop() {
  // put your main code here, to run repeatedly:

  //while(!radio.available());
    char a[32];
    char* c=a;
    int b=radio.getPayloadSize();
    Serial.println(b);
    radio.read(&a,b);
    Serial.println(a);
}
