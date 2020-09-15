#define pous1 2
#define pous2 3
#define L1 4
#define L2 5
#define L3 6
#define L4 7

void setup() {
  pinMode(pous1, INPUT);
  pinMode(pous2, INPUT);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
}

void loop() {
  
    digitalWrite(L2,HIGH);
    digitalWrite(L3,HIGH);
    
    digitalWrite(L1,LOW);
    digitalWrite(L4,LOW);
    
  if(!(digitalRead(pous1)&&digitalRead(pous2))){
 
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    
    digitalWrite(L1,HIGH);
    digitalWrite(L4,HIGH);
    delay(1000);
    if(digitalRead(pous1)){
      digitalWrite(L2,HIGH);
      digitalWrite(L3,LOW);
    
      digitalWrite(L1,LOW);
      digitalWrite(L4,HIGH);
      delay(500);
    }
    else if(digitalRead(pous2)){
      digitalWrite(L2,LOW);
      digitalWrite(L3,HIGH);
    
      digitalWrite(L1,HIGH);
      digitalWrite(L4,LOW);
      delay(500);
    }
    
    
  }

      
      
      
      
      
      
  }