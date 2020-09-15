#define led1  4
#define led2  5
#define entrada A1

float valorLDR; 


void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(entrada, INPUT);
}

void loop() {


   valorLDR = analogRead(entrada); // Função analogRead retorna valores de 0 a 1023;
    

  if(valorLDR < 255){               // entre 0 e 25%, ambos desligados.

     digitalWrite(led1, LOW);
     digitalWrite(led2, LOW);
    
  }

  else if (valorLDR >= 255 && valorLDR < 511){            //entre 25% e 50% led 1 ligado led 2 desligado

     digitalWrite(led1, HIGH);
     digitalWrite(led2, LOW);
    
  }

  else if (valorLDR >= 511 && valorLDR < 767){            //entre 50% e 75% led 1 ligado led 2 desligado

     digitalWrite(led1, LOW);
     digitalWrite(led2, HIGH);
  
  }

  else if(valorLDR >= 767 && valorLDR <= 1023){          //entre 75% e 100% led 1 ligado led 2 ligado

     digitalWrite(led1, HIGH);
     digitalWrite(led2, HIGH);
  
  }
}
