#include <htc.h>
#define _XTAL_FREQ 8000000
void main()
{
  TRISC=0X00;
  while(1)
  { 
    PORTC=0XFF;
    __delay_ms(1000);
    PORTC=0X00;
    __delay_ms(1000);
  }
}