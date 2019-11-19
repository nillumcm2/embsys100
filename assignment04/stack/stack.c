#include "stack.h"
#define STACK_SIZE 10

int HoldStack[STACK_SIZE];

int holdLocation;


void stack_Init(void)
{
  
  holdLocation = -1;
  
  for(int i = 0; i < STACK_SIZE; i++)
  {
    
    HoldStack[i] = 0;
    
    
  }
}
  
  // A function used to test if the stack is full
  int stack_Full()
  {

    return (holdLocation == (STACK_SIZE - 1));
    
  }
  
  // A function used to test if the stack is empty
  int stack_isEmpty()
  {
    
    return (holdLocation < 0);
    
  }


  // A fucntion used to push a value onto the stack
  int stack_Push(int data)
  {
    
    if(stack_Full())
    {
      // if fail to push
      return -1;
      
    }
    else
    {
      
      holdLocation++;
      HoldStack[holdLocation] = data;
      
    }
    
    return 0;
    
    
  }
  
  // A function used to pop a value off of the stack
int stack_Pop(int* data)
{
  
  if(stack_isEmpty())
  {
    // if fail to pop
    return -1;
    
  }
  else
  {
    
    *data = HoldStack[holdLocation];
    holdLocation--;
    
  }
  
  
  
  return 0;
  
  
  
}
  
  
