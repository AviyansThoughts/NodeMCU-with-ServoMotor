// Welcome to Aviyan's Thoughts

#include <Servo.h>

Servo myservo;  // create Servo object to control a servo

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(D4);  // attaches the servo on pin D4/GPIO 2 to the NodemCU
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
