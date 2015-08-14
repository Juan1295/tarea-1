#include <stdio.h>
#include "calculadora.h"

int main(void)
{
	int val1,val2,op,r;
	
	printf("Ingrese 1 para suma, 2 para resta, 3 para multipliacion y 4 para division\n");
	scanf(&op,"%d");
	printf("Ingrese el dato 1\n");
	scanf(&val1,"%d");
	printf("Ingrese el segundo valor\n");
	scanf(&val2,"%d");
	
	switch (op)
	{
		case 1:
			r=suma(val1,val2);
			break;
		case 2:
			r=resta(val1,val2);
			break;
		case 3:
			r=multiplicacion(val1,val2);
			break;
		case 4:
			r=division(val1,val2);
			break;
		default
			r=0;
			break;
	}
	
	printf("El resultado es %d",r);
	
	return 0;
}


