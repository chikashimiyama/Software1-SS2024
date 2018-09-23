int data = 0;
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
     data = Serial.read();
  }
  if(data > 0){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }  
  delay(5);
}


