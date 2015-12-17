#include <16F877A.h>
#include <stdlib.h>
#use delay(clock=4000000)
#fuses XT, PUT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOCPD, NOWRT,NODEBUG

void apagar(){
   output_high(Pin_B0);
   output_high(Pin_B1);
   output_high(Pin_B2);
   output_high(Pin_B3);
   output_high(Pin_B4);
   output_high(Pin_B5);
   output_high(Pin_B6);
   output_high(Pin_B7);
   output_low(Pin_D0);
   output_low(Pin_D1);
   output_low(Pin_D2);
   output_low(Pin_D3);
   output_low(Pin_D4);
   output_low(Pin_D5);
   output_low(Pin_D6);
   output_low(Pin_D7);
}

void prender(int x){

   switch(x){

      case 1: 
         apagar();
         output_high(Pin_D0);
         output_low(Pin_B0);
         break;
      case 2:
         apagar();
         output_high(Pin_D0);
         output_low(Pin_B1);
         break;
      case 3:
         apagar();
         output_high(Pin_D0);
         output_low(Pin_B2);
         break;
      case 4:
         apagar();
         output_high(Pin_D0);
         output_low(Pin_B3);
         break;
      case 5:
         apagar();
         output_high(Pin_D0);
         output_low(Pin_B4);
         break;
      case 6:
         apagar();
         output_high(Pin_D0);
         output_low(Pin_B5);
         break;
      case 7:
         apagar();
         output_high(Pin_D0);
         output_low(Pin_B6);
         break;
      case 8:
         apagar();
         output_high(Pin_D0);
         output_low(Pin_B7);
         break;

      case 9: 
         apagar();
         output_high(Pin_D1);
         output_low(Pin_B0);
         break;
      case 10:
         apagar();
         output_high(Pin_D1);
         output_low(Pin_B1);
         break;
      case 11:
         apagar();
         output_high(Pin_D1);
         output_low(Pin_B2);
         break;
      case 12:
         apagar();
         output_high(Pin_D1);
         output_low(Pin_B3);
         break;
      case 13:
         apagar();
         output_high(Pin_D1);
         output_low(Pin_B4);
         break;
      case 14:
         apagar();
         output_high(Pin_D1);
         output_low(Pin_B5);
         break;
      case 15:
         apagar();
         output_high(Pin_D1);
         output_low(Pin_B6);
         break;
      case 16:
         apagar();
         output_high(Pin_D1);
         output_low(Pin_B7);
         break;

      case 17: 
         apagar();
         output_high(Pin_D2);
         output_low(Pin_B0);
         break;
      case 18:
         apagar();
         output_high(Pin_D2);
         output_low(Pin_B1);
         break;
      case 19:
         apagar();
         output_high(Pin_D2);
         output_low(Pin_B2);
         break;
      case 20:
         apagar();
         output_high(Pin_D2);
         output_low(Pin_B3);
         break;
      case 21:
         apagar();
         output_high(Pin_D2);
         output_low(Pin_B4);
         break;
      case 22:
         apagar();
         output_high(Pin_D2);
         output_low(Pin_B5);
         break;
      case 23:
         apagar();
         output_high(Pin_D2);
         output_low(Pin_B6);
         break;
      case 24:
         apagar();
         output_high(Pin_D2);
         output_low(Pin_B7);
         break;

      case 25: 
         apagar();
         output_high(Pin_D3);
         output_low(Pin_B0);
         break;
      case 26:
         apagar();
         output_high(Pin_D3);
         output_low(Pin_B1);
         break;
      case 27:
         apagar();
         output_high(Pin_D3);
         output_low(Pin_B2);
         break;
      case 28:
         apagar();
         output_high(Pin_D3);
         output_low(Pin_B3);
         break;
      case 29:
         apagar();
         output_high(Pin_D3);
         output_low(Pin_B4);
         break;
      case 30:
         apagar();
         output_high(Pin_D3);
         output_low(Pin_B5);
         break;
      case 31:
         apagar();
         output_high(Pin_D3);
         output_low(Pin_B6);
         break;
      case 32:
         apagar();
         output_high(Pin_D3);
         output_low(Pin_B7);
         break;

      case 33: 
         apagar();
         output_high(Pin_D4);
         output_low(Pin_B0);
         break;
      case 34:
         apagar();
         output_high(Pin_D4);
         output_low(Pin_B1);
         break;
      case 35:
         apagar();
         output_high(Pin_D4);
         output_low(Pin_B2);
         break;
      case 36:
         apagar();
         output_high(Pin_D4);
         output_low(Pin_B3);
         break;
      case 37:
         apagar();
         output_high(Pin_D4);
         output_low(Pin_B4);
         break;
      case 38:
         apagar();
         output_high(Pin_D4);
         output_low(Pin_B5);
         break;
      case 39:
         apagar();
         output_high(Pin_D4);
         output_low(Pin_B6);
         break;
      case 40:
         apagar();
         output_high(Pin_D4);
         output_low(Pin_B7);
         break;

      case 41: 
         apagar();
         output_high(Pin_D5);
         output_low(Pin_B0);
         break;
      case 42:
         apagar();
         output_high(Pin_D5);
         output_low(Pin_B1);
         break;
      case 43:
         apagar();
         output_high(Pin_D5);
         output_low(Pin_B2);
         break;
      case 44:
         apagar();
         output_high(Pin_D5);
         output_low(Pin_B3);
         break;
      case 45:
         apagar();
         output_high(Pin_D5);
         output_low(Pin_B4);
         break;
      case 46:
         apagar();
         output_high(Pin_D5);
         output_low(Pin_B5);
         break;
      case 47:
         apagar();
         output_high(Pin_D5);
         output_low(Pin_B6);
         break;
      case 48:
         apagar();
         output_high(Pin_D5);
         output_low(Pin_B7);
         break;

      case 49: 
         apagar();
         output_high(Pin_D6);
         output_low(Pin_B0);
         break;
      case 50:
         apagar();
         output_high(Pin_D6);
         output_low(Pin_B1);
         break;
      case 51:
         apagar();
         output_high(Pin_D6);
         output_low(Pin_B2);
         break;
      case 52:
         apagar();
         output_high(Pin_D6);
         output_low(Pin_B3);
         break;
      case 53:
         apagar();
         output_high(Pin_D6);
         output_low(Pin_B4);
         break;
      case 54:
         apagar();
         output_high(Pin_D6);
         output_low(Pin_B5);
         break;
      case 55:
         apagar();
         output_high(Pin_D6);
         output_low(Pin_B6);
         break;
      case 56:
         apagar();
         output_high(Pin_D6);
         output_low(Pin_B7);
         break;

      case 57: 
         apagar();
         output_high(Pin_D7);
         output_low(Pin_B0);
         break;
      case 58:
         apagar();
         output_high(Pin_D7);
         output_low(Pin_B1);
         break;
      case 59:
         apagar();
         output_high(Pin_D7);
         output_low(Pin_B2);
         break;
      case 60:
         apagar();
         output_high(Pin_D7);
         output_low(Pin_B3);
         break;
      case 61:
         apagar();
         output_high(Pin_D7);
         output_low(Pin_B4);
         break;
      case 62:
         apagar();
         output_high(Pin_D7);
         output_low(Pin_B5);
         break;
      case 63:
         apagar();
         output_high(Pin_D7);
         output_low(Pin_B6);
         break;
      case 64:
         apagar();
         output_high(Pin_D7);
         output_low(Pin_B7);
         break;

      default:
         apagar();
         break;
   }


}
void main(){
   int i;
   set_tris_B(0);
   set_tris_D(0);
   apagar();
   while(true){
      for(i=64;i>0;i--){
         prender(i);
         delay_ms(500);
      }
   }
}
