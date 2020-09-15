

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(4, HIGH);   
  delay(200);                       
  digitalWrite(4, LOW);    
  delay(200);
  digitalWrite(4, HIGH);   
  delay(200);                       
  digitalWrite(4, LOW);    
  delay(200);
  digitalWrite(4, HIGH);   
  delay(200);                       
  digitalWrite(4, LOW);    // primeira letra
  
  delay(600);

  digitalWrite(4,  HIGH);   
  delay(600);                       
  digitalWrite(4, LOW);    
  delay(200);
  digitalWrite(4, HIGH);   
  delay(600);                       
  digitalWrite(4, LOW);    
  delay(200);
  digitalWrite(4, HIGH);   
  delay(600);                       
  digitalWrite(4, LOW);   // segunda letra
  
  delay(600);

  digitalWrite(4, HIGH);   
  delay(200);                       
  digitalWrite(4, LOW);    
  delay(200);
  digitalWrite(4, HIGH);   
  delay(200);                       
  digitalWrite(4, LOW);    
  delay(200);
  digitalWrite(4, HIGH);   
  delay(200);                       
  digitalWrite(4, LOW);  // terceira letra e fim da palavra
    
  delay(1400);                       
}
