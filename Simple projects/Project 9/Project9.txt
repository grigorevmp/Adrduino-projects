int tilt = 8;

void setup(){
  pinMode(tilt, OUTPUT);
}

void loop(){
  int i;
  while(1){
    i = analogRead(5);
    if ( i > 200){
      digitalWrite(tilt, HIGH); 
      }
    else{
      digitalWrite(tilt, LOW);
    }
  }    
}