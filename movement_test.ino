//MOVEMENT TEST
//objective: move forward
//           move left
//           move right
//           move backward

#include <Servo.h>
Servo servoLeft;
Servo servoRight;

void setup() {
servoLeft.attach(11);
servoRight.attach(10);

tone(4, 3000, 1000);  //play tone for 1s
delay(1000);          //delay for end tone sound
forward(2000);        //forward 2s
turnLeft(600);        //left 0.6s
turnRight(600);       //right 0.6s
backward(2000);       //back 2s
disableServos();       //stay still indefinitely
}

void loop() {
}

//forward function
void forward(int time) {
servoLeft.writeMicroseconds(1700);  //left wheel counterclockwise
servoRight.writeMicroseconds(1300); //right wheel clockwise
delay(time);
}

//left turn function
void turnLeft(int time) {
servoLeft.writeMicroseconds(1300);  //left wheel clockwise
servoRight.writeMicroseconds(1300); //right wheel counterclockwise
delay(time);
}

//right turn function
void turnRight(int time) {
servoLeft.writeMicroseconds(1700);  //left wheel counterclockwise
servoRight.writeMicroseconds(1700); //right wheel counterclockwise
delay(time);
}

//backward function
void backward(int time) {
servoLeft.writeMicroseconds(1300);  
servoRight.writeMicroseconds(1700); 
delay(time);
}

//halt servo signals
void disableServos() {
servoLeft.detach();
servoRight.detach();
}