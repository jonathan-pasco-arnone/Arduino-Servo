/*
  Created by: Jonathan P-A
  Created on: October 11
  
  Makes a servo turn to 180 degrees and then back to 10 repeatedly
*/

#include <Servo.h>

Servo servo;
int angle = 10;

void setup() {
  servo.attach(2);
  servo.write(angle);
}

void loop() {
  // scan from 0 to 180 degrees
  for(angle = 10; angle < 180; angle++) {
    servo.write(angle);
    delay(15);
  }
  // now scan back from 180 to 0 degrees
  for(angle = 180; angle < 10; angle--) {
    servo.write(angle);
    delay(15);
  }
}
