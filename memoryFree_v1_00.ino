/*
  memoryFree
  
  Sketch to report the free memory on an Arduino controller
  
  From section 17.2 in the Arduino Cookbook
  
  04/22/14        V1_00:
                  Start date for this routine
  
*/

//  variables created ny the build process when compiling the sketch

extern int __bss_end;
extern void *__brkval;

//  function to return the amount of free RAM

int memoryFree()
{
  int freeValue;
  
  if ((int)__brkval == 0)
    freeValue = ((int)&freeValue) - ((int)&__bss_end);
  else
    freeValue = ((int)&freeValue) - ((int)__brkval);
    
  return freeValue;
}


