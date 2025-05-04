#include<stdio.h>
#include<stdlib.h>
#include<pic18f4450.h>

void main(void)
{
    int i,temp;
    int source1[] = {0x21,0x22,0x23,0x24,0x25};
    int dest[] = {0x00,0x00,0x00,0x00,0x00,0x00};
    
    for(i=0;i<=4;i++)
    {    temp = source1[i];
         source1[i] = dest[i];
        dest[i] = temp;
    }
}