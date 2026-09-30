//SERVO CALIBRATION
//objective: center servo position by having them fully stop.
//           adjust servo pot until it stops
#include <Servo.h>
Servo servoLeft;
Servo servoRight;

void setup() {
servoLeft.attach(10);  //attach Left
servoRight.attach(11);  //attach Right
servoLeft.writeMicroseconds(1500);   //1.5ms stay still signal
servoRight.writeMicroseconds(1500);  //1.5ms stay still signal
}

void loop() {
}

//End