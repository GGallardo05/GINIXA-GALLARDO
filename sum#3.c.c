 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	// ax2 + bx + c = 0 //
	
	float a, b, c, d;
	
		printf ("introduce el numero entero de a: ");
		scanf("%d", &a);
		printf ("introduce el numero entero de b: ");
		scanf("%d", &b);
		printf ("introduce el numero entero de c: ");
		scanf("%d", &c);
		
		d= b*b-(4*a*c);
		
		if (d>0) {
			printf ("x1: %.f\n", (-b+ sqrt(d) )/(2*a) );
			printf ("x2: %.f\n", (-b- sqrt(d) )/(2*a) );	
		}
		
		else if (d==0) {
			printf ( "x: %.f\n", -b/(2*a) ); 
		}
		
		else {
			printf ("x1: %+ %.f i\n", -b/(2*a), sqrt(-d)/(2*a) );
			printf ("x2: %- %.f i\n", -b/(2*a), sqrt(-d)/(2*a) );
		}

	return 0;
}
