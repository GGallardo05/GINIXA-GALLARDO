#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int N;
char cl[]= "contras3na",posc[10];


printf("Introducir la posible clave intento 1 : ");
  scanf("%s", posc);
  //printf("valor %s", posc);
  if (strcmp(cl,posc)==0) {
  printf("La clave coincide: ");}
  else {
 
    printf("La clave no coincide: ");
    N=N+1;
    printf("Introducir la posible clave intento 2: ");
       scanf("%s", &posc);
       
       if (strcmp(cl,posc)==0) {
      printf("La clave coincide: ");}
       else {

    printf("La clave no coincide: ");
    N=N+1;
    printf("Introducir la posible clave intento 3: ");
       scanf("%s", &posc);
       
       if (strcmp(cl,posc)==0) {
      printf("La clave coincide: ");}
       else {

    printf("La clave no coincide: ");
    N=N+2;
   
  }
   
  }
  }

if (N<=3){
    printf("Felicidades la clave coincide ");}
    else{

     printf("3 intentos maximos... cierre el programa y vuelva a intentarlo ");
   }
 
return 0;
}
