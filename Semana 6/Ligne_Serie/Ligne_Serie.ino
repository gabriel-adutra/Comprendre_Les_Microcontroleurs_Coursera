#define L1  4

void setup() {
 pinMode(L1, OUTPUT);
}

void loop() {
  digitalWrite(L1,LOW); //start S
  delay(3.33);
  
  digitalWrite(L1,HIGH);
  delay(3.33);
  digitalWrite(L1,HIGH);
  delay(3.33);
  digitalWrite(L1,LOW);
  delay(3.33);
  digitalWrite(L1,LOW);
  delay(3.33);
  digitalWrite(L1,HIGH);
  delay(3.33);
  digitalWrite(L1,LOW);
  delay(3.33);
  digitalWrite(L1,HIGH);
  delay(3.33);
  digitalWrite(L1,LOW);
  delay(3.33);

  
  digitalWrite(L1,HIGH); //fim do S
  delay(3.33);
  digitalWrite(L1,HIGH);
  delay(3.33);

  digitalWrite(L1,LOW); //start O
  delay(3.33);
  
  digitalWrite(L1,HIGH);
  delay(3.33);
  digitalWrite(L1,HIGH);
  delay(3.33);
  digitalWrite(L1,HIGH);
  delay(3.33);
  digitalWrite(L1,HIGH);
  delay(3.33);
  digitalWrite(L1,LOW);
  delay(3.33);
  digitalWrite(L1,LOW);
  delay(3.33);
  digitalWrite(L1,HIGH);
  delay(3.33);
  digitalWrite(L1,LOW);
  delay(3.33);

  digitalWrite(L1,HIGH); //fim do O
  delay(3.33);
  digitalWrite(L1,HIGH);
  delay(3.33);
  
  digitalWrite(L1,LOW); //start S
  delay(3.33);
  
  digitalWrite(L1,HIGH);
  delay(3.33);
  digitalWrite(L1,HIGH);
  delay(3.33);
  digitalWrite(L1,LOW);
  delay(3.33);
  digitalWrite(L1,LOW);
  delay(3.33);
  digitalWrite(L1,HIGH);
  delay(3.33);
  digitalWrite(L1,LOW);
  delay(3.33);
  digitalWrite(L1,HIGH);
  delay(3.33);
  digitalWrite(L1,LOW);
  delay(3.33);

  digitalWrite(L1,HIGH); //fim do S
  delay(3.33);
  digitalWrite(L1,HIGH);
  delay(3.33);
  
  delay(1000);
}
