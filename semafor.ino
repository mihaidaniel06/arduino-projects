int verde=8,rosu=4,galben=12,input_buton=2;
int verde1=11,galben1=9,rosu1=10;
int buzzer=7;

void deschis(){
  delay(2000);
  digitalWrite(rosu,LOW);
  digitalWrite(verde1,LOW);
  delay(500);
  digitalWrite(verde,HIGH);
  digitalWrite(rosu1,HIGH);
  for(int i=1;i<=5;i++)
  {
    digitalWrite(buzzer,HIGH);
    delay(600);
    digitalWrite(buzzer,LOW);
    delay(300);
  }
  digitalWrite(verde,LOW);
  digitalWrite(rosu1,LOW);
  delay(500);
  digitalWrite(galben,HIGH);
  digitalWrite(galben1,HIGH);
  delay(2000);
  digitalWrite(galben,LOW);
  digitalWrite(galben1,LOW);
  delay(500);
  digitalWrite(rosu,HIGH);
  digitalWrite(verde1,HIGH);
}

void setup() {
  pinMode(galben,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(rosu,OUTPUT);
  pinMode(input_buton,INPUT);
  pinMode(galben1,OUTPUT);
  pinMode(rosu1,OUTPUT);
  pinMode(verde1,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  digitalWrite(rosu,HIGH);
  digitalWrite(verde1,HIGH);
  if(digitalRead(input_buton)==HIGH){ //cand e butonul apasat
    deschis();
  }
  else{ //cand nu e butonul apasat
    digitalWrite(rosu,HIGH);
    digitalWrite(verde1,HIGH);
  }
}
