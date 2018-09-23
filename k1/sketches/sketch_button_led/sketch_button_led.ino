int buttonPin = 3;

void setup() { 
  Serial.begin(9800);  
  pinMode(buttonPin, INPUT);
}

void loop(){
 int buttonState = digitalRead(pushButton);
 Serial.println(buttonState); 
 delay(50);
}
