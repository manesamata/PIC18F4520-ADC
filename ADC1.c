#include<p18f4520.h>
void ADC_init(void);
void ADC_read(void);
void main()
{
ADC_init();
TRISB=0X00;
while(1)
{
ADC_read();
}
}
void ADC_init(void)
{
ADCON0=0X11;
ADCON1=0X00;
ADCON2=0XA4;
}
void ADC_read(void)
{
ADCON0bits.GO=1;
while(ADCON0bits.GO!=0);
PORTB=ADRESL;
}