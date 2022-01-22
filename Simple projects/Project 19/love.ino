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

void show_I(void){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}

void show_L(void){
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}

void show_O(void){
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}

void show_V(void){
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}

void show_E(void){
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
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

  
  show_I();
  digitalWrite(d4, HIGH);
  delay(200);
  digitalWrite(d4, LOW);
  show_I();
  digitalWrite(d3, HIGH);
  delay(200);
  digitalWrite(d3, LOW);
  show_I();
  digitalWrite(d2, HIGH);
  delay(200);
  digitalWrite(d2, LOW);
  show_I();
  digitalWrite(d1, HIGH);
  delay(200);
  digitalWrite(d1, LOW);

  for (int i = 0; i < 500; i++) {
    show_L();
    digitalWrite(d4, HIGH);
    delay(1);
    digitalWrite(d4, LOW);
    
    show_O();
    digitalWrite(d3, HIGH);
    delay(1);
    digitalWrite(d3, LOW);
    
    show_V();
    digitalWrite(d2, HIGH);
    delay(1);
    digitalWrite(d2, LOW);
    
    show_E();
    digitalWrite(d1, HIGH);
    delay(1);
    digitalWrite(d1, LOW);
  }   
  
  show_I();
  digitalWrite(d4, HIGH);
  delay(200);
  digitalWrite(d4, LOW);
  show_I();
  digitalWrite(d3, HIGH);
  delay(200);
  digitalWrite(d3, LOW);
  show_I();
  digitalWrite(d2, HIGH);
  delay(200);
  digitalWrite(d2, LOW);
  show_I();
  digitalWrite(d1, HIGH);
  delay(200);
  digitalWrite(d1, LOW);
  
}


