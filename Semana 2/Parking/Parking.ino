

  #define Button1 2
  #define Button2 3
  #define Led1 4
  #define Led2 5
  int buttonstate1;
  int buttonstate2;
  int aux1 = 0;
  int aux2 = 0;

void setup() {

  //led acende com 1
  //botão é pressionado com 0

  pinMode(Button1, INPUT);
  pinMode(Button2, INPUT);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);  
}

// the loop function runs over and over again forever

void loop() {

  digitalWrite(Led1, LOW);  
  digitalWrite(Led2, LOW);   

  delay(20);

  buttonstate1 = digitalRead(Button1);
  buttonstate2 = digitalRead(Button2);

  if (digitalRead(Button1) == 1) { 
    aux1 = aux1 + 1;
  }
  else{
    aux1 = aux1;
  }
  
  if (digitalRead(Button2) == 1){
    aux2 = aux2 + 1;
    
  }
  
  if ( aux1 > aux2){ // se o primeiro botão for pressionado mais vezes que o segundo, acende o led 1

  digitalWrite(Led1, HIGH);  
  digitalWrite(Led2, LOW);   
  }

  if(aux1 < aux2){ // se o segundo botão for pressionado mais vezes que o primeiro, acende o led 2
  digitalWrite(Led1, LOW);  
  digitalWrite(Led2, HIGH); 
    
  }

if( aux1 == aux2 ){ // se o segundo botão for pressionado mais vezes que o primeiro, acende o led 2
  digitalWrite(Led1, LOW);  
  digitalWrite(Led2, LOW); 
  
}

}


  
