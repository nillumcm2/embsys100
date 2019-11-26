#include "Swap.h"

// Function used to two pointers values.
void Swap(int** holdOne, int** holdTwo)
{
  
  int *holdthree = (*holdOne);
  *holdOne = (*holdTwo);
  *holdTwo = holdthree;
  
  
}
