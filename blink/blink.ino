#define LED 2

#define Row1 3
#define Row2 4
#define Row3 5

#define Col1 6
#define Col2 7
#define Col3 8
#define Col4 9

struct 


void setup() {
  pinMode(LED,OUTPUT);
  digitalWrite(LED,HIGH);
  pinMode(Row1,INPUT);
  pinMode(Row2,INPUT);
  pinMode(Row3,INPUT);

  pinMode(Col1,OUTPUT);
  pinMode(Col2,OUTPUT);
  pinMode(Col3,OUTPUT);
  pinMode(Col4,OUTPUT);
  delay(500);
  digitalWrite(LED,LOW);
  Serialbegin(9600);

}

void loop() {

  delay(500);
  digitalWrite(LED,HIGH);
  digitalWrite(Col1,HIGH)；
  digitalWrite(Col2,LOW);
  digitalWrite(Col3,LOW);
  digitalWrite(Col4,LOW);
  digitalWrite(Row1,LOW);
  digitalWrite(Row2,LOW);
  digitalWrite(Row3,LOW);
  delay(1);
  if()
}
