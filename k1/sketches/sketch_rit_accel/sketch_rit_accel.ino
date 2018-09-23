
int led = 13;
int time = 50;
int factor = 10;

void setup() {                
  pinMode(led, OUTPUT);     
}

void loop() {
  digitalWrite(led, HIGH);  
  delay(time);
  digitalWrite(led, LOW); 
  delay(time);
  time = time + factor;
  if(time > 250){
     factor = -10; 
  }else if(time < 50){
     factor = 10; 
  }
}
