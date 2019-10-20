1.
a) The value in the locals window under the default view is 536870912. 

b) The value of the register window is 0x20000000.

c) For this none of the flags were set because the value did not overflow, it was not zero and it did not become negative so no flags would need to be set for this APSR of the counter.

2.
a) The value in the locals window became 0 in the default view due to the carryover to a bit that does not exist because of incrementing the value.

b) The zero flag is set due to the value becoming 0. The carryover flag is set due to the fact that the number was equal to -1 and incrementing the value by one caused the register to have a carryover value to a nonexistent 9th bit though this makes sense due to this is how 2 compliments math works.

3.

a) The value in the locals window after incrementing once was 536870912 in the default view.

b) For this none of the flags were set because the value did not overflow, it was not zero and it did not become negative so no flags would need to be set for this APSR of the counter which is the same as it was for the signed int.

4.

a) The value became 0 due to the overflow.

b) The zero flag was set due to the value becoming 0 and the carryover bit was set due to the fact that there was an overflow due to the value being at the max value and then getting incremented by 1.

5.

a) The scope of the variable becomes global meaning the entire program has access.

b) No the counter variable is no longer visible in the locals window.

c)  The value can still be tracked in the registers, the memory and the watch windows.

d) The address in memory of the counter variable is 0x20000000.

6. 

a) The value of counter is 4.

b) This occurred due to the fact that the pointer p_int is now point to the same memory location that the counter variable is stored at. Thus the next lines of code that incremented the data in the memory location that p_int pointed to it also incremented counter due to the fact that that was where counter’s data was being stored in memory.

7. 

a) counter is stored at memory location 0x20000000.

b) counter is stored in RAM.

c) The value of counter is 4.

