
// This is a swap char function

      PUBLIC swapCharsAsm // Makes swapCharAsm avaible to modules

      SECTION .text:CODE:REORDER:NOROOT(2)

      THUMB


swapCharsAsm


    LDRB R2, [R1] // Read from memory of R1 to R2
    LDRB R3, [R0] // Read from memory of R0 to R3
    STRB R3, [R1] // Write from R3 to R1 in memory
    STRB R2, [R0] // Write from R2 to R0 in memory
    BX LR // return



    END