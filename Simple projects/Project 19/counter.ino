int a = 8;
int b = 7;
int c = 6;
int d = 5;
int e = 4;
int f = 3;
int g = 2;

int p = 1;

int d4 = A4;
int d3 = A3;
int d2 = A2;
int d1 = A1;

long n = 0;
int x = 100;
int del = 55;

void digital_1(void){
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void digital_2(void){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}
void digital_3(void){
  digitalWrite(a, !HIGH);
  digitalWrite(b, !HIGH);
  digitalWrite(c, !HIGH);
  digitalWrite(d, !HIGH);
  digitalWrite(e, !LOW);
  digitalWrite(f, !LOW);
  digitalWrite(g, !HIGH);
}
void digital_4(void){
  digitalWrite(a, !LOW);
  digitalWrite(b, !HIGH);
  digitalWrite(c, !HIGH);
  digitalWrite(d, !LOW);
  digitalWrite(e, !LOW);
  digitalWrite(f, !HIGH);
  digitalWrite(g, !HIGH);
}
void digital_5(void){
  digitalWrite(a, !HIGH);
  digitalWrite(b, !LOW);
  digitalWrite(c, !HIGH);
  digitalWrite(d, !HIGH);
  digitalWrite(e, !LOW);
  digitalWrite(f, !HIGH);
  digitalWrite(g, !HIGH);
}
void digital_6(void){
  digitalWrite(a, !HIGH);
  digitalWrite(b, !LOW);
  digitalWrite(c, !HIGH);
  digitalWrite(d, !HIGH);
  digitalWrite(e, !HIGH);
  digitalWrite(f, !HIGH);
  digitalWrite(g, !HIGH);
}
void digital_7(void){
  digitalWrite(a, !HIGH);
  digitalWrite(b, !HIGH);
  digitalWrite(c, !HIGH);
  digitalWrite(d, !LOW);
  digitalWrite(e, !LOW);
  digitalWrite(f, !LOW);
  digitalWrite(g, !LOW);
}
void digital_8(void){
  digitalWrite(a, !HIGH);
  digitalWrite(b, !HIGH);
  digitalWrite(c, !HIGH);
  digitalWrite(d, !HIGH);
  digitalWrite(e, !HIGH);
  digitalWrite(f, !HIGH);
  digitalWrite(g, !HIGH);
}
void digital_9(void){
  digitalWrite(a, !HIGH);
  digitalWrite(b, !HIGH);
  digitalWrite(c, !HIGH);
  digitalWrite(d, !HIGH);
  digitalWrite(e, !LOW);
  digitalWrite(f, !HIGH);
  digitalWrite(g, !HIGH);
}
void digital_0(void){
  digitalWrite(a, !HIGH);
  digitalWrite(b, !HIGH);
  digitalWrite(c, !HIGH);
  digitalWrite(d, !HIGH);
  digitalWrite(e, !HIGH);
  digitalWrite(f, !HIGH);
  digitalWrite(g, !LOW);
}
void digital_clear(void){
  digitalWrite(a, !LOW);
  digitalWrite(b, !LOW);
  digitalWrite(c, !LOW);
  digitalWrite(d, !LOW);
  digitalWrite(e, !LOW);
  digitalWrite(f, !LOW);
  digitalWrite(g, !LOW);
  digitalWrite(p, !LOW);
}

int anodPins[] = {A1, A2, A3, A4};

void setup(){
  for (int i = 1; i <= 8; i++){
    pinMode(i, OUTPUT);
  }
 for (int i = 0; i < 4; i++) {
    pinMode(anodPins[i], OUTPUT);
  }
  
  digital_clear();
}

void loop(){
  digital_clear();
  pickDigit(1);
  pickNumber((n/x/1000)%10);
  delay(1);
  
  digital_clear();
  pickDigit(2);
  pickNumber((n/x/100)%10);
  delay(1);
  
  digital_clear();
  pickDigit(3);
  dispDec(3);
  pickNumber((n/x/10)%10);
  delay(1);
  
  digital_clear();
  pickDigit(4);
  pickNumber(n/x%10);
  delay(1);

  n++;

  if(n == 1000){
    n = 0;  
  }
}

void pickDigit(int x){
  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);

  switch (x){
    case 1: 
      digitalWrite(d1, LOW);
      break;
    case 2: 
      digitalWrite(d2, LOW);
      break;
    case 3: 
      digitalWrite(d3, LOW);
      break;
    default: 
      digitalWrite(d4, LOW);
      break;
  }
}

void pickNumber(int x){
  switch (x){
    default:
      digital_0();
      break;
    case 1:
      digital_1();
      break;
    case 2:
      digital_2();
      break;
    case 3:
      digital_3();
      break;
    case 4:
      digital_4();
      break;
    case 5:
      digital_5();
      break;
    case 6:
      digital_6();
      break;
    case 7:
      digital_7();
      break;
    case 8:
      digital_0();
      break;
  }
}

void dispDec(int x){
  digitalWrite(p, LOW);
}


