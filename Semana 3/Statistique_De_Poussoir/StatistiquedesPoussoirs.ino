//código semana 3 atividade 1:



#define LED1 4
#define LED2 5
#define BOTAO1 2
#define BOTAO2 3
  int cont1 = 0;
  int cont2 = 0;
  int tempo1 = 0;
  int tempo2 = 0;
  int buttonstate1;
  int buttonstate2;
  int aux;
  
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BOTAO1, INPUT);
  pinMode(BOTAO2, INPUT);
}

void loop() {

  if(cont1 > cont2){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
  }
  if(cont2 > cont1){
    digitalWrite(LED2,HIGH);
    digitalWrite(LED1,LOW);
  }
  if(cont1==cont2){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
  }
  
  
tempo1 = 0;
  while(!digitalRead(BOTAO1)){
    aux = millis();
      while(!digitalRead(BOTAO1)){
        tempo1 = millis() - aux; 
    }
  }
  if(tempo1>=200){
    cont1 += 1;
    }
  
tempo2 = 0;
  while(!digitalRead(BOTAO2)){
    aux = millis();
      while(!digitalRead(BOTAO2)){  
        tempo2 = millis() - aux;
      }
  }
  if(tempo2>=200){
    cont2 += 1;
    }

}
