#include <toneAC.h>

int volume = 10; // Adjust from 1 to 10

int sensorValue1;
int sensorValue2;
int sensorValue3;
int sensorValue4;

int mappedValue1;
int mappedValue2;
int mappedValue3;
int mappedValue4;

// Calibrate to lowest and highest sensor read values
int readMin = 900;
int readMax = 1000;

// Min and max desired frequency output
int freqMin = 2000;
int freqMax = 8000;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue1 = analogRead(A0);
  sensorValue2 = analogRead(A1);
  sensorValue3 = analogRead(A2);
  sensorValue4 = analogRead(A3);
  
  mappedValue1 = map(sensorValue1,readMin,readMax,freqMin,freqMax);
  mappedValue2 = map(sensorValue2,readMin,readMax,freqMin,freqMax);
  mappedValue3 = map(sensorValue3,readMin,readMax,freqMin,freqMax);
  mappedValue4 = map(sensorValue4,readMin,readMax,freqMin,freqMax);

  // Serial.println(mappedValue1); // Use to check sensor read Values

  // Playback!
  toneAC(mappedValue1, volume, 100);
  delay(100);
  toneAC(mappedValue2, volume, 100);
  delay(100);
  toneAC(mappedValue3, volume, 100);
  delay(100);
  toneAC(mappedValue4, volume, 100);
  delay(100);
  toneAC();
}





