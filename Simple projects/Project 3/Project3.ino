int val;
int ledPin = 11;
int potpin = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potpin);
  Serial.println(val);
  analogWrite(ledPin, val/4);
  delay(10);
}