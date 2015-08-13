#include <stdio.h>
#include "calculadora.h"

int main(void)
{
 int a,b,op,r;
 printf("Ingrese 1 para suma, 2 para resta, 3 para multipliacion y 4 para division\n");
 scanf(&op,"%d");
 printf("Ingrese el dato 1\n");
 scanf(&a,"%d");
 printf("Ingrese el segundo valor\n");
 scanf(&b,"%d");
  switch (op)
 {
  case 1:
   r=suma(a,b);
  break
  case 2:
   r=resta(a,b);
  brak
  case 3:
   r=multiplicacion(a,b);
  break
  case 4:
   r=division(a,b);
  break
  default
   r=0;
   return 0;
  break
 }
printf("El resultado es %d",r);
  return 0;
}


