/*______________________________________XXXXXXXXXXXXX-- Bloqueio de código (dever de programação)-- XXXXXXXXXXXXX_________________________________________

Bloqueio de código (dever de programação)
Fechadura codificada

Usando apenas dois botões, é preciso um pouco de truque para fazer um bloqueio codificado! Detectaremos com precisão as pressões e liberações.

Para ligar o LED L1, será necessário sucessivamente:

    pressione P1
    liberação P1
    pressione P1 novamente
    pressione P2 (sem liberar P1)
    liberação P2
    solte P1: então L1 deve acender por três segundos.

A velocidade de execução da sequência não é importante. Qualquer outra manipulação é considerada falsa. Após uma sequência (errada), o programa deve:

    aguarde até que nenhuma tecla seja pressionada
    espere mais um segundo
    retome sua detecção.

Se você tiver alguma dúvida, assista ao vídeo da sequência correta: https://pyr.ch/coursera/Serrure.mp4
O limite de aprovação é definido em 70%.

 ______________________________________XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX_________________________________________ */ 

#define pinBotao1 2
#define pinLED1   4

#define pinBotao2 3


int count = 0;

bool pinBotao1Retencao(); // funcao que identifica se botão 1 foi clicado
bool pinBotao2Retencao(); // funcao que identifica se botao 2 foi clicado
bool pinBotao3High();     // funcao que identifica se botao 1 foi pressionado ou solto

void setup() {
  pinMode(pinBotao1, INPUT_PULLUP);
  pinMode(pinBotao2, INPUT_PULLUP);
  pinMode(pinLED1, OUTPUT);
}


void loop() {

   if (pinBotao1Retencao()) {                                               // se botão 1 foi clicado        
    count = count + 1;
   }
     if (pinBotao3High() == 1) {                                            //  botão 1 sendo pressionado e segurado
                          
      if (pinBotao2Retencao()){                                             // botao 2 sendo clicado  
        
        if(!pinBotao3High){                                                 // botao 1 sendo solto
            
          count = count + 1;
       }}}

    if (count == 2){
      digitalWrite(pinLED1, HIGH);
        delay(3000);
          digitalWrite(pinLED1, LOW);  
          count = 0; 
    }

    else { 
      delay(3000);
    }
}
  

bool pinBotao1Retencao() {
   #define tempoDebounce 300 //(tempo para eliminar o efeito Bounce EM MILISEGUNDOS)

   bool estadoBotao;
   static bool estadoBotaoAnt; 
   static bool estadoRet = true;
   static unsigned long delayBotao = 0;

   if ( (millis() - delayBotao) > tempoDebounce ) {
       estadoBotao = digitalRead(pinBotao1);
       if ( estadoBotao && (estadoBotao != estadoBotaoAnt) ) {
          estadoRet = !estadoRet;
          delayBotao = millis();
       }
       estadoBotaoAnt = estadoBotao;
   }

   return estadoRet;
}





bool pinBotao2Retencao() {
   #define tempoDebounce 300 //(tempo para eliminar o efeito Bounce EM MILISEGUNDOS)

   bool estadoBotao;
   static bool estadoBotaoAnt; 
   static bool estadoRet = true;
   static unsigned long delayBotao = 0;

   if ( (millis() - delayBotao) > tempoDebounce ) {
       estadoBotao = digitalRead(pinBotao2);
       if ( estadoBotao && (estadoBotao != estadoBotaoAnt) ) {
          estadoRet = !estadoRet;
          delayBotao = millis();
       }
       estadoBotaoAnt = estadoBotao;
   }

   return estadoRet;
}




bool pinBotao3High(){

  bool estadoBotao;
  estadoBotao = digitalRead(pinBotao1);

    if (estadoBotao == 1){
      return 1;
    }

    else {
      return 0;
    }
}
