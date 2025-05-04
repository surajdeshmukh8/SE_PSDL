
#include<stdio.h>
#include<stdlib.h>
#include<pic18f4550.h>
void main(void)
{
int i,sum,n;
int number[] = {1,2,3,4,5,6,7,8,9,10}; // array of 10 numbers
sum = 0; // initialize sum as zero
for(i=0; i<=9;i++)
{ 
   sum = sum+number[i];
}
TRISB =0; //initialize Port_D as output
PORTB = sum; // from sum to PORT_D
//n = 0xFF + 0XFF;
}