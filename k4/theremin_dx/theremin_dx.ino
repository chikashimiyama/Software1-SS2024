
int speaker = 8;
int previousValue;

void setup()
{
    pinMode(speaker, OUTPUT);
}

void loop()
{
    int delayTime = analogRead(A0) * 4;
    float timbre = (float)analogRead(A1);
    float ratio = timbre / 1024.0;
    
    delayTime = ((delayTime - previousValue) * 0.1 + previousValue) * 2;

    digitalWrite(speaker, 1);
    delayMicroseconds(delayTime * ratio);
    digitalWrite(speaker, 0);
    delayMicroseconds(delayTime * (1.0 - ratio));

    previousValue = delayTime;
}
