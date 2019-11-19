1.
b. 
0x800’004c: 0x2101 MOVS R1 #1
STR R2, [R0, #0x4]
STR R1, [R0]
MOVS R5, #0
LDR, N R0, [PC, #0x34]
LDR, N R1, [PC, #0x38]
LDR, N R2, [PC, #0x38]
B, N 0x800’006a
c. 
0800’007a: 0x2301 MOVS R3, #1
0800’007c: 0x6003 STR R3, [R0]
0800’068: 0x6015 STR R5, [R2]

2.
a. The values are passed by be stored into registers R0, R1, R2, and R3, but it then stores the values of R0 into the SP, and then uses R0 for a different value.

b. Before the function is two of the registers are pushed onto the stack.

c. During the function call it uses to the program counter to be able to access the values that were not kept stored in the registers and then combines the values into register R0;

d. It seems as though the register are constantly being pushed onto and popped off of the stack, when it does not have enough registers to store all of the values being used.
