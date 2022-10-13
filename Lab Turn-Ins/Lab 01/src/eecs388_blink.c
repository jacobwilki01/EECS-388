#include <stdint.h>

#include "eecs388_lib.h"

/*
   Task 2.1: Review eecs388_lib.h and eecs388_lib.c 

   Task 2.2: Implement RGB blinky. 

   - set red, green, and blue LEDs for output mode, using the gpio_mode() function
   - in the main loop, turn on/off a different LED at each iteration. 
      for example, 
      at 1st iteration
         turn on RED led
	      delay 500 ms 
	      turn off RED led
	      delay 300 ms.
	   at 2nd iteration
	      do the same but f
      gpio_mode(gpio[2], OUTPUT);r GREEN led
	   at 3rd iteration
	      do the same but for BLUE led
	   at 4th iteration
	      back to RED led. 
	   ...
   - You must use array and modulo (%) operator to change the color. 

   Task 2.3. Implement RGBA (bonus: +1 point)
   - rotate red, green, blue, and white (all LEDs are enabled) colors.
*/

int main()
{
   int gpio[3] = {GREEN_LED,RED_LED,BLUE_LED};
   int count = 0;
   int temp;

   gpio_mode(gpio[0], OUTPUT);
   gpio_mode(gpio[1], OUTPUT);
   gpio_mode(gpio[2], OUTPUT);
    
   while(1)
   {
	  if (count % 4 == 3) {
		temp = 0;
		while(temp < 3){
			gpio_write(gpio[temp % 4], ON);
			temp++;
		}
		delay(500);
		temp = 0;
		while(temp < 3){
			gpio_write(gpio[temp % 4], OFF);
			temp++;
		}
		delay(300);
	  } else { 
		gpio_write(gpio[count % 4], ON);
		delay(500);
		gpio_write(gpio[count % 4], OFF);
		delay(300);
	  }
	  count++;
   }
}
