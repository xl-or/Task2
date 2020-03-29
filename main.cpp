#define F_CPU 8000000UL
#include <avr/io.h>
#include <util\delay.h>

int main(void)
{
    int number[10] = {
        0x3F,           //0
        0x06,           //1
        0x5B,           //2
        0x4F,           //3
        0x66,           //4
        0x6D,           //5
        0x7D,           //6
        0x07,           //7
        0x7F,           //8
        0x6F            //9
    };
    DDRD = 0xFF;
    PORTD = 0x00;
    while (1) 
    {
       for (int i=0;i<10;i++)
       {
           PORTD = number[i];
           _delay_ms(1000);
       }
    }
}

