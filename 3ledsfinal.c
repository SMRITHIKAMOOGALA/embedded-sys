#include<reg51.h>
sfr leds=0xA0;
sfr SW=0x90;
unsigned int x;
int main ()
{
while(1)
{
if(SW==0xF1)
{
      leds=0x00 ;                       
}
else if(SW==0xF3)
{   
    leds=0x01;                          
}
else if(SW==0xF5)
{   
    leds=0x02;                        
}
else if(SW==0xF7)
{
    leds=0x03;                      

}
else if(SW==0xF9)
{
    leds=0x04;                      
}
else if(SW==0xFB)
{
    leds=0x05;                      
}
else if(SW==0xFD)
{
    leds=0x06;                      
}
else if(SW==0xFF)
{
    leds=0x07;                      
}
else
    leds=0x00;
}
}