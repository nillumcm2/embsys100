#include "Add.h"

int holdvalue;

void add_Init(void)
{
  
  holdvalue = 0;
  
}
 

int callAdd(int holdOne, int holdTwo, int holdThree, int holdFour, int holdFive)
{
  
  holdvalue = holdOne + holdTwo + holdThree + holdFour + holdFive;
  
  return holdvalue;
  
  
}
