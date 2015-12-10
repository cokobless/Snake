#include <stdio.h>
#include <16F877A.h>
#use delay (clock=4000000)
#fuses XT, PUT, NOWDT, NOPROTECT,NOBROWNOUT,NOCPD,NOWRT,NODEBUG
int A1=1,A2=2,A3=3,A4=4,A5=5,A6=6,A7=7,A8=8;
int B1=9,B2=10,B3=11,B4=12,B5=13,B6=14,B7=15,B8=16;
int C1=17,C2=18,C3=19,C4=20,C5=21,C6=22,C7=23,C8=24;
int D1=25,D2=26,D3=27,D4=28,D5=29,D6=30,D7=31,D8=32;
int E1=33,E2=34,E3=35,E4=36,E5=37,E6=38,E7=39,E8=40;
int F1=41,F2=42,F3=43,F4=44,F5=45,F6=46,F7=47,F8=48;
int G1=49,G2=50,G3=51,G4=52,G5=53,G6=54,G7=55,G8=56;
int H1=57,H2=58,H3=59,H4=60,H5=61,H6=62,H7=63,H8=64;

typedef struct culebra{
   int X;
   int Y;
   char tipo;
   int estado;
}snake;

/*void comida(snake matriz[8][8]){
   int i,j,x=0;
   while(x == 0){
      i=rand()%8;
      j=rand()%8;
      if(matriz[i][j].estado == 0){
         matriz[i][j].estado = 1;
         x = 1;
      }
   }
}*/

void iniciar(snake matriz[8][8]){
   int i,j;
   for(i=0;i<8;i++){
      for(j=0;j<8;j++){
         if(i==3 && j == 3) {
            matriz[i][j].X=i+1;
            matriz[i][j].Y=j+1;
            matriz[i][j].tipo='B';
            matriz[i][j].estado=1;
         }
         if(i==3 && j == 4) {
            matriz[i][j].X=i+1;
            matriz[i][j].Y=j+1;
            matriz[i][j].tipo='H';
            matriz[i][j].estado=1;
         }
         else{
            matriz[i][j].X=i+1;
            matriz[i][j].Y=j+1;
            matriz[i][j].tipo='N';
            matriz[i][j].estado=0;
         }     
      }
   }
}

void imprimir(snake mcc[8][8]){
   int i,j,x;
   for(i=0;i<8;i++){
      for(j=0;j<8;j++){
         x=mcc[i][j].estado;
         printf("%d \t", x);
      }
      printf("\n");
   }
}

/*snake posicion(sanke matriz[8][8]){
   int i,j;
   snake head;
   for(i=0;i<8;i++){
      for(j=0;j<8;j++){
         if(matriz[i][j].tipo == 'H'){
            head = matriz[i][j];
            break;
         }
      }
   }
   return head;
}
void prender(snake matriz[8][8]){
      int i,j,x,y;
      for(i=0;i<8;i++){
         for(j=0;j<8;j++){
            if(matriz[i][j].estado==1){
               output_high(Pin_Ci);// no se si esta wea funciona y si no lo puedo compilar, no lo puedo revisar :/
               output_low(Pin_Dj);
            }
         }
      }
}

void mover_derecha(snake matriz[8][8]){
   int i,j,x,y;
   snake cabeza;
   cabeza = posicion(matriz[8][8]);
   x=cabeza.X-1;
   y=cabeza.Y-1:
   for(j=y;j<8;j++){
      tmp=cabeza;
      matriz[i][j+1]=tmp;
      cabeza.tipo='B';
      matriz[i][j-1].estado=0;
      prender(matriz[8][8]);
   }
}*/

/*void prender(int posicion){
      int i,j,x,y;
      for(i=0;i<8;i++){
         for(j=0;j<8;j++){
            if(mcc[i][j]==1){
               x=i+1;
               y=j+1;
               output_high(Pin_Cx);
               output_low(Pin_Dy);
            }
         }
      }
}*/

void main(){
   //set_tris_C(0);
   //set_tris_D(0);
   //int x;
   //x=D6;
   //while(true){
     // prender(x);
   //}
   snake mcc[8][8];
   iniciar(mcc);
   imprimir(mcc);
   printf("%d\n",D5);
}
