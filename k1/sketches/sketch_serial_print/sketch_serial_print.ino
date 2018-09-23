
int led = 13;
int time = 1000;

void setup() {    
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  delay(time);
  digitalWrite(led, HIGH);
  delay(time);
  digitalWrite(led, LOW);
  time = random(50, 300);
  Serial.print("new interval:");
  Serial.println(time);
}

