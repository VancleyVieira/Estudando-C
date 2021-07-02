#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){

	float numero = 0;
	float porcentagem = 0;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	porcentagem = (numero*25) / 100;
	
	printf("\n\n 25 porcento do numero digitado e: %4.2f \n\n",porcentagem);
	system("PAUSE");


}

