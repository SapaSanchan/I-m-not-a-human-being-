/*
  * Sam Yarbrough
  * Use a button to do LED things 
  * Program #5
  * 06/14/17
*/
#include "simpletools.h"                     

int main()                                    
{
 
  while(1)
  {
    if ( input(0) == 1 )
    { 
      putChar(HOME);
      print("The button is pressed %c\n", CLREOL);
      high(15);
      low(14);
    }   
    else
    {
      putChar(HOME);
      print("The button is not pressed %c\n", CLREOL);
      low(15);
      high(14);
    }    
    pause(100);           
  }  
}