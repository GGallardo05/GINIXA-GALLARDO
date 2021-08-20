#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// leer los nombres de 5 personas por teclado y que determine cuál de esas tiene el nombre más corto.

int main() {
	
	int persona;
	long int mayor=15;
	
	char nom[1][5][15];
	
	for(persona=1;persona<6;persona++){
		printf("introduzca el %d nombre: ",persona); 
		scanf("%s",nom[0][persona]);  	
	}
	
	for(persona=1;persona<6;persona++){
		if(strlen(nom[0][persona])<mayor){
			mayor=strlen(nom[0][persona]);
		}
	}
	for(persona=1;persona<6;persona++){
		if(strlen(nom[0][persona])==mayor){
			printf("%s",nom [0][persona]);
		}
	}
	
	
	return 0;
}
