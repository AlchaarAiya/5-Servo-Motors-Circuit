#include <Servo.h> 

int servoPin1 = 8;
int servoPin2 = 9;
int servoPin3 = 10;
int servoPin4 = 11;
int servoPin5 = 12;
 
Servo servo1;  
Servo servo2;  
Servo servo3;  
Servo servo4;  
Servo servo5;  
 
int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  servo1.attach(servoPin1); 
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);
  servo5.attach(servoPin5);
  
  //Initial Position (90 degrees)
  servo1.write(90);               
  servo2.write(90);               
  servo3.write(90);               
  servo4.write(90);               
  servo5.write(90);
  
  delay(5000);
} 
 
 
void loop() 
{ 
  // scan from 0 to 180 degrees
  for(angle = 0; angle < 180; angle++)  
  {                                  
    servo1.write(angle);               
    servo2.write(angle);               
    servo3.write(angle);               
    servo4.write(angle);               
    servo5.write(angle);               
    delay(15);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 180; angle > 0; angle--)    
  {                                
    servo1.write(angle);           
    servo2.write(angle);           
    servo3.write(angle);           
    servo4.write(angle);           
    servo5.write(angle);           
    delay(15);       
  } 
}
