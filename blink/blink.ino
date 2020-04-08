#define LED 2

#define Row1 3
#define Row2 4
#define Row3 5

#define Col1 6
#define Col2 7
#define Col3 8
#define Col4 9


void setup() {
  pinMode(LED,OUTPUT);
  digitalWrite(LED,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
}

void loop() {
  delay(500);
  digitalWrite(LED,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
}
