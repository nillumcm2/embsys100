/*******************************************************************************
FILE NAME   : main.c
DESCRIPTION : Where all the magic begins.
	      

Copyright   : David Allegre
            : 2015
	    : All Rights Reserved
*******************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "nucleoboard.h"
#include "hw_init.h"
#include "print.h"
//#include "sqrAsm.s"

char clr_scrn[] = { 27, 91, 50, 74, 0 };              // esc[2J
/* Public variables ----------------------------------------------------------*/
__IO uint32_t timer;
PRINT_DEFINEBUFFER();           /* required for lightweight sprintf */
/* Private prototype ---------------------------------------------------------*/
void delay(uint32_t time);

uint32_t sqrAsm(int val);
uint32_t div2Asm(int val);
void swapCharsAsm(char* val1, char* val2);
const char* myCstr = "\nHello from assembly! ";

/*******************************************************************************
Function Name   : main
Description     : 
Parameters      :
Return value    :               */
void main() {
uint8_t foo;

  foo = 10;
  Hw_init();

  PrintString(clr_scrn); /* Clear entire screen */
  // Change [My name] to your name      //
  PrintString("Ryan McMullin's Nucleo STM32F401 is ... alive!!!\n");
  RETAILMSG(1, ("Programming Assignment #1: Built %s %s.\r\n\r\n",
              __DATE__,
              __TIME__));  

  while (foo) {
    GPIO_ToggleBits(GPIO_PORT_LD2, GPIO_PIN_LD2);
    PrintString("EMBSYS CP100A: University of Washington - UART Test Application \n");
    
    delay(1000);
    GPIO_ToggleBits(GPIO_PORT_LD2, GPIO_PIN_LD2);
    
    delay(1000);
    
    PrintString("x = ");
    Print_uint32(foo);
    
    uint32_t y = sqrAsm(foo);
    
    PrintString("x^2 = ");
    Print_uint32(y);
    PrintString("\n");
    
   uint32_t z = div2Asm(foo);
    
    PrintString("x/2 = ");
    Print_uint32(z);
    PrintString("\n");
    
    
    
    foo--;
  }
  
  char a = 'a';
  char b = 'b';
  
  PrintString("a = ");
  PrintByte(a);
  PrintString("\n");
  
  PrintString("b = ");
  PrintByte(b);
  PrintString("\n");
  
  swapCharsAsm(&a,&b);
  
  PrintString("a = ");
  PrintByte(a);
  PrintString("\n");
  
  PrintString("b = ");
  PrintByte(b);
  PrintString("\n");
  
  
  while (1) {
    // loop forever
    asm("nop");

  }
}


void delay(uint32_t time) {
  
  timer = time;
  while(timer) {}
}
void SystemInit(void) {
  // System init is called from the assembly .s file
  // We will configure the clocks in hw_init
  asm("nop");
}
  