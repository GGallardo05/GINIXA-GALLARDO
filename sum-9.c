#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num, cifras=0;
	
	printf ("introduzca el numero: \n ");
	scanf ("%d", &num);
	  
	while(num>0) {
		num=num/10;
		cifras++;
}
printf(" el numero tiene %d cifras", cifras);
	
		 
	return 0;
}

