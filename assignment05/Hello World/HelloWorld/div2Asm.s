// A function used to return the given number divided by 2.
      EXTERN PrintString // PrintString is defined outside of this file
      EXTERN myCstr // Defined outside of the file

      PUBLIC div2Asm // Makes div2Asm avaible to modules

      SECTION .text:CODE:REORDER:NOROOT(2)

      THUMB


div2Asm

    PUSH {R0, LR} // saves the input and its address
    LDR R0, =myCstr // loads the address of myCstr into R0
    LDR R0, [R0] // Loads the address of the string into R0
    BL PrintString // Calls the PrintString to print the string
    POP {R0, LR} // Loads the original value of R0 back into R0
    MOV R1, #2 // Moves the value of 2 into R1
    UDIV R0, R0, R1 // Does an unsigned division of R0 by R2 and loads the result into R0
    BX LR // Returns the funstion with the result in R0
    



    END