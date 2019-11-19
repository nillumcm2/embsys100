#include <assert.h>
#include "stack.h"
int main()
{
  
  //Test 1
  // taking from and empty stack, should return a -1 showing a failure to 
  // pop from the stack.
  int test1;
  int test2;
  int test3;
  int holdTest;
  
  test1 = 42;
  test2= 42;
  test3 = 42;
  holdTest = 42;
  
  stack_Init();
  
  test1 = stack_Pop(&holdTest);
  
  
  assert(-1 == test1);
  assert(42 == holdTest);
  
  
  
 //Test 2 
 // testing is stack empty function, should show a true for the first test 
  // and a false for the second test
  test1 = 42;
  test2 = 42;
  test3 = 42;
  holdTest = 42;
  
  stack_Init();
  
  test1 = stack_isEmpty();
  
  
  assert(1 == test1);
  
  test3 = stack_Push(1);
  
  test2 =  stack_isEmpty();

  assert(0 == test2);
  
  // Test 3
  // Testing the stack full function, should return a false for the 
  // test and a true for the second test
  
  test1 = 42;
  test2 = 42;
  test3 = 42;
  holdTest = 42;
  
  stack_Init();
  
  test1 = stack_Full();
  
  assert(0 == test1);
  
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   
   test2 = stack_Full();
   
   assert(1 == test2);
  
   // Test 4
   // Push a value and then pop the value, should return 9 which is 
   // success
  
  test1 = 42;
  test2 = 42;
  test3 = 42;
  holdTest = 42;
  
  stack_Init();
  
  test1 = stack_Push(1);
  
  test2 = stack_Pop(&holdTest);
  
  test3 = stack_isEmpty();
  
  assert(0 == test1);
  assert(0 == test2);
  assert(1 == test3);  
    
  // Test 5
  // testing Pushing a value onto a full stack, should return a failure
  
    test1 = 42;
  test2 = 42;
  test3 = 42;
  holdTest = 42;
  
  stack_Init();
  
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   test3 = stack_Push(1);
   
   test1 = stack_Full();
   test2 = stack_Push(2);
   test3 = stack_Pop(&holdTest);
   
   
   assert(1 == test1);
   assert(-1 == test2);
   assert(1 == holdTest);
   
   // Test 6 
   // testing Pushing a value onto the stack should return a 0,
   // showing a success
   
  test1 = 42;
  test2 = 42;
  test3 = 42;
  holdTest = 42;
  
  stack_Init();
  
   test3 = stack_Push(1);
   
   assert(0 == test3);
  
  while(1)
  {
    
    
  }
  
    
    
  return 0;
  
  
}
