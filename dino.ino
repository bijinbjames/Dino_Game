
#include <Servo.h>
#define threshold 450   // change this value for better performance 
#define unpress_agle 36              
#define press_angle 79        


Servo myservo;  // create servo object to control a servo
bool trig=true;

void setup() {          
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
myservo.write(unpress_angle);   
}

void loop() {

 myservo.write(unpress_angle);              // unpress the button
 delay(1);
 if(analogRead(A0)< threshold)
 {
  
      myservo.write(press_angle);          // press the button
    delay(100 );                       // waits 100ms for the servo to reach the position
                      
 }                     
}
