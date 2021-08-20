#include <stdio.h>
#include <stdlib.h>

//Debe contemplar estas referencias: si el número es 15 debe mostrar su nombre en letras, 
//y si es diferente a 15 entonces debe mostrar su potencia al cubo (^3).

int main() {
	
	double n,p=3;
	
	printf("introduzca el numero: ");
	scanf("%lf",&n);
	
	double resultado =pow(n,p);
	
	if(n==15){
		printf("quince");}
	else{
		printf("%lf", resultado);
	}
	
	return 0;
}
