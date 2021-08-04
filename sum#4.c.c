#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float ventas1, ventas2, ventas3,VenDi;
	float promedio, suma;

	
	printf("venta del primer empleado:\n ");
	scanf ("%f", &ventas1);
	
	printf("venta del segundo empleado:\n ");
	scanf ("%f", &ventas2);
	
	printf("venta del tercer empleado:\n ");
	scanf ("%f", &ventas3);
	
	suma=(ventas1+ventas2+ventas3);
	promedio=suma /3;
	
		printf("el promedio de ventas es: %f", promedio);
	

	return 0;
}
