
int thisYear = 2014;
int birthYear = 1979;

void setup() { 
  Serial.begin(9600);  
}

void loop() {
  int age = thisYear - birthYear;
  Serial.print("I was born in ");
  Serial.print( birthYear );
  Serial.print(" and I am now ");
  Serial.print( age );
  Serial.println(" years old.");
  delay(1000);
}
