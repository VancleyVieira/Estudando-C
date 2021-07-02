#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	
	float A = 0;
	float B = 0;
	float raizA = 0;
	float raizB = 0;
	float somaRaiz = 0;
	
	printf ("\n\n Digite o valor referente a letra A: ");
	scanf ("%f", &A);
	
	printf ("\n\n Digite o valor referente a letra B: ");
	scanf ("%f", &B);
	
	raizA = sqrt(A);
	raizB = sqrt(B);
	
	somaRaiz = raizA + raizB;
	
	printf ("\n\n A soma do quadrado das raizes e: %4.2f",somaRaiz);
	
	system ("PAUSE");
	
}
