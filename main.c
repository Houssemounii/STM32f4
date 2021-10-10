 //PG13 
 //AHB1 
 //RCC->AHB1ENR
 //GPIOx_MODER
 //GPIOx_ODR
#include "stm32f4xx.h"                  // Device header

 void delayMs (int delay);
 int main (void)
 {
   RCC->AHB1ENR |= 0x40;                    // enable GPIOG clock
   GPIOG->MODER |= 0x4000000 ;            //0b 0000 0100 0000 0000 0000 0000 0000 0000 
	 
 while(1){
	 
 GPIOG->ODR = 0x2000;   //0b 0010 0000 0000 0000
	 
	 delayMs(100);
	 GPIOG ->ODR &=~0x2000; 
	 delayMs(100);
 } 

 }
 
 void delayMs (int delay)
 {
    int i ; 
	 for (;  delay>0 ;delay--){
	  for (i=0 ; i < 3195 ; i++);
	 }
	 
 }