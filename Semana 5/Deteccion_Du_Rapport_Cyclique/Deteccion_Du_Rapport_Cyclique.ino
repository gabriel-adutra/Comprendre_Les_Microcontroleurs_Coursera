/* Detecção do ciclo de serviço (dever de programação)
Detecção do ciclo de trabalho de uma forma de onda retangular

Um sinal digital periódico é chamado de quadrado se o tempo em que o sinal estiver em 1 for igual ao tempo em que estiver em 0.
Se esse não for o caso, geralmente falamos de um sinal retangular. 
O ciclo de serviço é o tempo durante o qual o sinal está em 1 dividido pelo período.

Estamos tentando alcançar um dispositivo com uma entrada e duas saídas. 
A entrada (Pous1) recebe um sinal retangular, cuja frequência pode variar de 1 a 100 Hz.
A primeira saída (Led1) deve ser ativada se o ciclo de trabalho for inferior a 40%, a segunda (Led2) se é superior a 60%. 
Se não houver sinal ou se o sinal for quadrado, nenhuma saída deverá ser ativada.

Como de costume, use P1 como entrada, L1 e L2 como saídas.

Dica: trabalhe com números inteiros, mas lembre-se das propriedades da divisão inteira (por exemplo: 45 dividido por 100 é igual a 0) */


#define led1  4
#define led2  5
#define pous1 2
float tempo;
float tempo2;
int aux;


void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(pous1, INPUT);
}

void loop() {
  
  if(digitalRead(pous1)){
    aux = millis();
    while(digitalRead(pous1)){
      tempo = millis()-aux;  
    }
  }
  if(!digitalRead(pous1)){
    aux = millis();
    while(!digitalRead(pous1)){
      tempo2 = millis()-aux;
    }
  }
  if (   (    (tempo/ (tempo+tempo2) ) < 0.6)&& ( (tempo/ (tempo+tempo2) ) > 0.4))
  {
    
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
  }
  
  else if((tempo/ (tempo+tempo2) ) < 0.4){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
  }
  
  else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
  }
  
}
