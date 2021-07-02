#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){

	float numero = 0;
	float quadrado = 0;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	quadrado = numero*numero;
	
	printf("O quadrado do numero digitado e: %4.2f \n\n",quadrado);
	system("PAUSE");	
	
}
