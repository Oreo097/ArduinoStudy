void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  digitalWrite(2,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalRead(2);
  if(a==HIGH)
  {
    Serial.println("yes");
  }
}
