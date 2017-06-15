/*
   * Sam Yarbrough
   * Control a servo motor with exactly 2 buttons
   * Program #7
   * 06/15/17
*/
#include "simpletools.h"
#include "servo.h"

// constants are names we use to make our program
// easier to understand and maintain

const int RIGHT = 4;
const int LEFT = 3;                    
const int SERVO = 14;

// servo angles are shown times 10, EX: 90 = 900
const int RSTOP = 1700;
const int LSTOP = 10;

int main()                                    
{
  
  int angle = 900;
  
  while(1)
  {
   
   // get pushbutton state
    if (input(LEFT) == 1)
      angle = angle - 18;     
     
    if (input(RIGHT) == 1)
      angle = angle + 18;      
  
    // limit the angle of the servo
    if (angle > RSTOP)
      angle = RSTOP;      
    if (angle < LSTOP)
      angle = LSTOP;      
   
    // update the serial console (scrren output
    print("%c angle = %d %c", HOME, angle, CLREOL);
    servo_angle(SERVO, angle);  
    pause(25);
  }  // end of the while loop
 
  return 0;
}
