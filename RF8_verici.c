#include <16f877.h>
#fuses xt,nowrt,nowdt,nobrownout,nolvp,nocpd,nodebug,noprotect,noput
#use delay(clock=4M)
#use rs232(baud=600,parity=N,xmit=pin_c6,rcv=pin_c7,bits=8)
#use fast_io(b)

void main()
{ 
  while(1)
  {
   set_tris_b(0xff);
     if(input(pin_b0)==1)
     {
      putc(0b01010101);
      putc('X');
      putc('W');
      delay_ms(10);
     }
      if(input(pin_b1)==1)
     {
      putc(0b01010101);
      putc('X');
      putc('S');
      delay_ms(10);
     }
      if(input(pin_b2)==1)
     {
      putc(0b01010101);
      putc('X');
      putc('D');
      delay_ms(10);
     }
      if(input(pin_b3)==1)
     {
      putc(0b01010101);
      putc('X');
      putc('A');
      delay_ms(10);
     }
      if(input(pin_b4)==1)
     {
      putc(0b01010101);
      putc('X');
      putc('C'); //dur
      delay_ms(10);
     }
      if(input(pin_b5)==1)
     {
      putc(0b01010101);
      putc('X');
      putc('R');
      delay_ms(10);
     }
      if(input(pin_b6)==1)
     {
      putc(0b01010101);
      putc('X');
      putc('L');
      delay_ms(10);
     }
      if(input(pin_b7)==1)
     {
      putc(0b01010101);
      putc('X');
      putc('F');
      delay_ms(10);
     }
  }   
}
