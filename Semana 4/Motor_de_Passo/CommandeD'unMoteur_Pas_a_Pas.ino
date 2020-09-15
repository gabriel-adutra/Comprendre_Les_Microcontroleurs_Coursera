#define Button1 2
#define Button2 3
#define LED1 4
#define LED2 5
int state = 0;
int L1;
int L2;

void setup() {
  pinMode(Button1, INPUT);
  pinMode(Button2, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);  
}

void loop() {
  
  if(state == 0){
    L1 = 0;
    L2 = 0;
  }
  else if(state == 1){
    L1 = 1;
    L2 = 0;
  }
  else if(state == 2){
    L1 = 1;
    L2 = 1;
  }
  else{
    L1 = 0;
    L2 = 1;
  }
  
  if(!Button1){
    state += 1;
  }
  if(!Button2){
  state -= 1;
  }
  if(state == 4){
  state = 0;
  }
  if(state==-1){
    state = 3;
  }
  digitalWrite(LED1, L1);
  digitalWrite(LED2, L2);
  delay(200);
}
