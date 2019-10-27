#define RCC_BASE 0x40023800
#define RCC_AHB1ENR (*((unsigned int*)(RCC_BASE + 0x30)))

#define GPIOA_BASE 0x40020000
#define GPIOA_MODER (*((unsigned int*)(GPIOA_BASE + 0x00)))
#define GPIOA_ODR (*((unsigned int*)(GPIOA_BASE + 0x14)))


int counter = 0;
//1000000
int holdspace = 500000;
int holdletter = 1500000;
int holdend = 3500000;

int main()
{
    // RCC Base Address: 0x40023800
    // RCC AHB1 peripheral clock enable register (RCC_AHB1ENR)
    // Address offset: 0x30
    // Write: 0x1
    // 1. Enable clock to Peripheral
   RCC_AHB1ENR |= 0x1;
  
    // GPIOA Base Address: 0x40020000
    // GPIO port mode register (GPIOx_MODER) (x = A..E and H)
    // Address offset: 0x00
    // Write: 0x400
  // 2. Set GPIO5 to Output
   GPIOA_MODER |= 0x400;


  
  volatile int counter;

  while(1)
  {
    
    // R
    counter=0;

    GPIOA_ODR |= 0x00000020;

    
    counter=0;
    while (counter < holdspace)
    {
      counter++;
    }
    GPIOA_ODR &= 0xFFFFFFDF;

    
    counter=0;
    while (counter < holdspace)
    {
      counter++;
    }
        
    GPIOA_ODR |= 0x00000020;

    counter=0;
    while (counter < holdletter)
    {
      counter++;
    }

    GPIOA_ODR &= 0xFFFFFFDF;

    
    counter=0;
    while (counter < holdspace)
    {
      counter++;
    }
    
            
    GPIOA_ODR |= 0x00000020;

    counter=0;
    while (counter < holdspace)
    {
      counter++;
    }
    
    // Y
    GPIOA_ODR &= 0xFFFFFFDF;
    counter=0;
    while (counter < holdletter)
    {
      counter++;
    }
    
    GPIOA_ODR |= 0x00000020;

    counter=0;
    while (counter < holdletter)
    {
      counter++;
    }
    
    GPIOA_ODR &= 0xFFFFFFDF;
    counter=0;
    while (counter < holdspace)
    {
      counter++;
    }
    GPIOA_ODR |= 0x00000020;
 
    counter=0;
    while (counter < holdspace)
    {
      counter++;
    }
    
    counter=0;
    GPIOA_ODR &= 0xFFFFFFDF;
    while (counter < holdspace)
    {
      counter++;
    }
    
    GPIOA_ODR |= 0x00000020;

    counter=0;
    while (counter < holdletter)
    {
      counter++;
    }
    
    GPIOA_ODR &= 0xFFFFFFDF;
    counter=0;
    while (counter < holdspace)
    {
      counter++;
    }
    
    GPIOA_ODR |= 0x00000020;

    counter=0;
    while (counter < holdletter)
    {
      counter++;
    }
    
    
    // A
    GPIOA_ODR &= 0xFFFFFFDF;
    counter=0;
    while (counter < holdletter)
    {
      counter++;
    }
    
    GPIOA_ODR |= 0x00000020;

    counter=0;
    while (counter < holdspace)
    {
      counter++;
    }
    
    GPIOA_ODR &= 0xFFFFFFDF;
    counter=0;
    while (counter < holdspace)
    {
      counter++;
    }
    
    GPIOA_ODR |= 0x00000020;

    counter=0;
    while (counter < holdletter)
    {
      counter++;
    }
    
    //N
    
    GPIOA_ODR &= 0xFFFFFFDF;
    counter=0;
    while (counter < holdletter)
    {
      counter++;
    }
    
    GPIOA_ODR |= 0x00000020;

    counter=0;
    while (counter < holdletter)
    {
      counter++;
    }
    
    GPIOA_ODR &= 0xFFFFFFDF;
    counter=0;
    while (counter < holdspace)
    {
      counter++;
    }
    
     GPIOA_ODR |= 0x00000020;

    counter=0;
    while (counter < holdspace)
    {
      counter++;
    }
    
    GPIOA_ODR &= 0xFFFFFFDF;
    counter=0;
    while (counter < holdend)
    {
      counter++;
    }
    
    
  }
  return 0;


}
