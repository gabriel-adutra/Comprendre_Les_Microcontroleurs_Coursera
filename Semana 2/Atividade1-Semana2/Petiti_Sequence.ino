

  #define Button1 2
  #define Button2 3
  #define Led1 4
  #define Led2 5
  int buttonstate1;
  int buttonstate2; 

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

  delay(20);

  buttonstate1 = digitalRead(Button1);
  buttonstate2 = digitalRead(Button2);

  if (buttonstate1 == LOW && buttonstate2 == HIGH){ // se o estacionamento está ocupado, devemos acionar botao 1 e acender led 1 com led 2 apagado.

  digitalWrite(Led1, HIGH);  
  digitalWrite(Led2, LOW);   
  }

  if(buttonstate1 == HIGH && buttonstate2 == LOW){ // se o estacionamento está vazio, devemos acionar botao e acender led 2 e apagar led 1;
  digitalWrite(Led1, LOW);  
  digitalWrite(Led2, HIGH); 
    
  }
}


  
