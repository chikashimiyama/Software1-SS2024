
int led = 13;
int time = 20;

void setup() {                
  pinMode(led, OUTPUT);     
}

void loop() {
  digitalWrite(led, HIGH);  
  delay(time);
  digitalWrite(led, LOW); 
  delay(time);
}
