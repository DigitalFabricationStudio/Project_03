/*
  ReadLight
*/
int sensorValue;
int mappedValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(A0);
  mappedValue = map(sensorValue,850,1000,0,255);
  Serial.println(sensorValue);
  //Serial.println(mappedValue);
  delay(300);
}
