#define L1 4
#define P1 2
#define P2 3
int aux;
int tempo;

void setup() {
  pinMode(L1, OUTPUT);
  pinMode(P1, INPUT);
  pinMode(P2, INPUT);
}

void loop() {
  
  digitalWrite(L1,LOW);
  
 if(!digitalRead(P1)){
  aux = millis();
  digitalWrite(L1,HIGH);
  while(!digitalRead(P1)){
    tempo = millis()-aux;
  }
 }
 
 digitalWrite(L1,LOW);
 
  
  if(!digitalRead(P2)){
    digitalWrite(L1,HIGH);
    delay(tempo);
    digitalWrite(L1,LOW);
  }
}
