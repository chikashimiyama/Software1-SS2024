int sw = 8;

void setup() {
  pinMode(sw, INPUT);
  digitalWrite(sw, HIGH);
  Serial.begin(9600);
}

void loop() {
  int status = digitalRead(sw); 
  Serial.write(status);
  delay(5);
}


