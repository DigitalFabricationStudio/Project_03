#include <toneAC.h>

int pushButton = 2;
int buttonState;
int state = LOW;

long time = 0;
long debounce = 1000;

int on = false;
int volume = 2; // 1 to 10

int sensorValue;

void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}

void loop() {
  buttonState = digitalRead(pushButton);
  
  if (buttonState == HIGH && millis() - time > debounce) {
    if (on == false)
      on = true;
   else
      on = false;
      time = millis();    
  }

  if(on==true){
    sensorValue = analogRead(A0);
    Serial.println(sensorValue);

    toneAC(sensorValue, volume, 100);
    toneAC(sensorValue*3, volume, 100);
    delay(100);
    toneAC();
  }
}



