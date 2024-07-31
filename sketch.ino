int sensor = 0;

void setup() {
 pinMode(13, OUTPUT);
 pinMode(2, INPUT);
 pinMode(8, OUTPUT);
 pinMode(20, OUTPUT);
}
void loop() {
  
  sensor = digitalRead(2);
  if(sensor == HIGH){
    digitalWrite(13, HIGH);
    tone(8, 1000, 500);
    digitalWrite(20, HIGH);
  }

  delay(10);
}
