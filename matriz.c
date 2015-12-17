#include <16F877A.h>
#include <stdlib.h>
#use delay(clock=4000000)
#fuses XT, PUT, NOWDT, NOPROTECT, NOBROWNOUT, NOLVP, NOCPD, NOWRT,NODEBUG


void prender(int x){
   switch (x){
      case 1:
         output_high(Pin_D0);
         output_low(Pin_B0);
         break;
      case 2:
         output_high(Pin_D0);
         output_low(Pin_B1);
         break;
      case 3:
         output_high(Pin_D0);
         output_low(Pin_B2);
         break;
      case 4:
         output_high(Pin_D0);
         output_low(Pin_B3);
         break;
      case 5:
         output_high(Pin_D0);
         output_low(Pin_B4);
         break;
      case 6:
         output_high(Pin_D0);
         output_low(Pin_B5);
         break;
      case 7:
         output_high(Pin_D0);
         output_low(Pin_B6);
         break;
      case 8:
         output_high(Pin_D0);
         output_low(Pin_B7);
         break;
      case 9:
         output_high(Pin_D1);
         output_low(Pin_B0);
         break;
      case 10:
         output_high(Pin_D1);
         output_low(Pin_B1);
         break;
      case 11:
         output_high(Pin_D1);
         output_low(Pin_B2);
         break;
      case 12:
         output_high(Pin_D1);
         output_low(Pin_B3);
         break;
      case 13:
         output_high(Pin_D1);
         output_low(Pin_B4);
         break;
      case 14:
         output_high(Pin_D1);
         output_low(Pin_B5);
         break;
      case 15:
         output_high(Pin_D1);
         output_low(Pin_B6);
         break;
      case 16:
         output_high(Pin_D1);
         output_low(Pin_B7);
         break;
      case 17:
         output_high(Pin_D2);
         output_low(Pin_B0);
         break;
      case 18:
         output_high(Pin_D2);
         output_low(Pin_B1);
         break;
      case 19:
         output_high(Pin_D2);
         output_low(Pin_B2);
         break;
      case 20:
         output_high(Pin_D2);
         output_low(Pin_B3);
         break;
      case 21:
         output_high(Pin_D2);
         output_low(Pin_B4);
         break;
      case 22:
         output_high(Pin_D2);
         output_low(Pin_B5);
         break;
      case 23:
         output_high(Pin_D2);
         output_low(Pin_B6);
         break;
      case 24:
         output_high(Pin_D2);
         output_low(Pin_B7);
         break;
      case 25:
         output_high(Pin_D3);
         output_low(Pin_B0);
         break;
      case 26:
         output_high(Pin_D3);
         output_low(Pin_B1);
         break;
      case 27:
         output_high(Pin_D3);
         output_low(Pin_B2);
         break;
      case 28:
         output_high(Pin_D3);
         output_low(Pin_B3);
         break;
      case 29:
         output_high(Pin_D3);
         output_low(Pin_B4);
         break;
      case 30:
         output_high(Pin_D3);
         output_low(Pin_B5);
         break;
      case 31:
         output_high(Pin_D3);
         output_low(Pin_B6);
         break;
      case 32:
         output_high(Pin_D3);
         output_low(Pin_B7);
         break;
      case 33:
         output_high(Pin_D4);
         output_low(Pin_B0);
         break;
      case 34:
         output_high(Pin_D4);
         output_low(Pin_B1);
         break;
      case 35:
         output_high(Pin_D4);
         output_low(Pin_B2);
         break;
      case 36:
         output_high(Pin_D4);
         output_low(Pin_B3);
         break;
      case 37:
         output_high(Pin_D4);
         output_low(Pin_B4);
         break;
      case 38:
         output_high(Pin_D4);
         output_low(Pin_B5);
         break;
      case 39:
         output_high(Pin_D4);
         output_low(Pin_B6);
         break;
      case 40:
         output_high(Pin_D4);
         output_low(Pin_B7);
         break;
      case 41:
         output_high(Pin_D5);
         output_low(Pin_B0);
         break;
      case 42:
         output_high(Pin_D5);
         output_low(Pin_B1);
         break;
      case 43:
         output_high(Pin_D5);
         output_low(Pin_B2);
         break;
      case 44:
         output_high(Pin_D5);
         output_low(Pin_B3);
         break;
      case 45:
         output_high(Pin_D5);
         output_low(Pin_B4);
         break;
      case 46:
         output_high(Pin_D5);
         output_low(Pin_B5);
         break;
      case 47:
         output_high(Pin_D5);
         output_low(Pin_B6);
         break;
      case 48:
         output_high(Pin_D5);
         output_low(Pin_B7);
         break;
      case 49:
         output_high(Pin_D6);
         output_low(Pin_B0);
         break;
      case 50:
         output_high(Pin_D6);
         output_low(Pin_B1);
         break;
      case 51:
         output_high(Pin_D6);
         output_low(Pin_B2);
         break;
      case 52:
         output_high(Pin_D6);
         output_low(Pin_B3);
         break;
      case 53:
         output_high(Pin_D6);
         output_low(Pin_B4);
         break;
      case 54:
         output_high(Pin_D6);
         output_low(Pin_B5);
         break;
      case 55:
         output_high(Pin_D6);
         output_low(Pin_B6);
         break;
      case 56:
         output_high(Pin_D6);
         output_low(Pin_B7);
         break;
      case 57:
         output_high(Pin_D7);
         output_low(Pin_B0);
         break;
      case 58:
         output_high(Pin_D7);
         output_low(Pin_B1);
         break;
      case 59:
         output_high(Pin_D7);
         output_low(Pin_B2);
         break;
      case 60:
         output_high(Pin_D7);
         output_low(Pin_B3);
         break;
      case 61:
         output_high(Pin_D7);
         output_low(Pin_B4);
         break;
      case 62:
         output_high(Pin_D7);
         output_low(Pin_B5);
         break;
      case 63:
         output_high(Pin_D7);
         output_low(Pin_B6);
         break;
      case 64:
         output_high(Pin_D7);
         output_low(Pin_B7);
         break;
   }
}
void main(){
	int i;
	set_tris_B(0);
	set_tris_C(0);
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
	while(true){
		for(i=0;i<64;i++){
			prender(i);
			delay_ms(500);
		}
	}
}
