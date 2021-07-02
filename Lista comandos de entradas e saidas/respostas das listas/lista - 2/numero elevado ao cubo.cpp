#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	
	float numero = 0;
	float cubo = 0;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	cubo = numero*numero*numero;
	
	printf("\n\nO numero digitado elevado ao cupo e: %4.2f\n\n",cubo);
	system("PAUSE");	
	
}
