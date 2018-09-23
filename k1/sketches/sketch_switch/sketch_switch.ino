int sw = 8;

void setup() {
  pinMode(sw, INPUT);
  digitalWrite(sw, HIGH);
  Serial.begin(9600);
}

void loop() {
  Serial.write(digitalRead(sw));
  delay(5);
}


