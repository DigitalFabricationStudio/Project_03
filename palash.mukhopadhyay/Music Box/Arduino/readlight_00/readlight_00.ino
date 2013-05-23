/*
  ReadLight
*/
int led = 13;
int sensorValue;
int mappedValue;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(1200);
}

void loop() {
  digitalWrite(led, HIGH);
  sensorValue = analogRead(A0);
  mappedValue = map(sensorValue,850,1000,0,255);
  // Serial.println(sensorValue);
  Serial.println(mappedValue);
  delay(300);
  digitalWrite(led, LOW);
  delay(300);
}
