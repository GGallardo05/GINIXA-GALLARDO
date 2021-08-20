#include <stdio.h>
#include <stdlib.h>

// Elaborar una aplicación de línea de comandos en C que dado 10 números, pueda mostrar cuál es el número mayor y el número de veces que aparece en la serie.

int main(int argc, char *argv[]) {
	
	int num, mayor=0, cant;
			
	for (cant=1; cant<=10; cant++){
		printf("introduzca el numero %d: ", cant); 
		scanf("%d", &num);
					
			if(num>mayor){ 
				mayor=num;
						
			}
			}
	printf("el valor mayor %d", mayor);
			
		
	return 0;
}


