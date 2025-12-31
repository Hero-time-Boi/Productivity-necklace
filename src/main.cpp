#include <Arduino.h>
#define LED_PIN GPIO_NUM_21

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);

  Serial.println("analog value: ");
  Serial.println(value);

  if (value > 100){
    digitalWrite(LED_PIN, LOW);
  }

  else {
    digitalWrite(LED_PIN, HIGH);
  }
  
  delay(250);
}