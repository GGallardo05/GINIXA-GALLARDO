#include <stdio.h>

int main()
{
  
    int i, numero;

        printf( "\n   La tabla de multiplicar es:\n", numero );
		scanf( "%d", &numero );

        for ( i = 1 ; i <= 10 ; i++ )
            printf( "\n   %d * %d = %d", i, numero, i * numero );

    return 0;
}

