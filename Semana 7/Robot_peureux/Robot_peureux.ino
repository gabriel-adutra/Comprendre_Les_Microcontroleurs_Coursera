#define L1 4#define L2 5void setup() {  pinMode(L1, OUTPUT);  pinMode(L2, OUTPUT);  pinMode(A1, INPUT);}void loop() {  int valorlido;  valorlido = analogRead(A1);  if(valorlido > 511){    digitalWrite(L1,HIGH);    digitalWrite(L2,LOW);  }  else{    digitalWrite(L2, HIGH);    digitalWrite(L1, LOW);  }  delay(20);}