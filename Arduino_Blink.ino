/*
  Created by: Jonathan P-A
  Created on: October 11
  
  Makes a servo turn to 90 degrees and then back to 0 repetedly
*/
#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(2);
  servo.write(0);
  delay(2000);
}

void loop() {
  servo.write(90);
  delay(1000);
  servo.write(0);
  delay(1000);
}
