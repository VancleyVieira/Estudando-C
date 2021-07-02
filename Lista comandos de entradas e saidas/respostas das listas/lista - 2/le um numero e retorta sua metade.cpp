#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	
	float numero = 0;
	float metade = 0;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	metade = numero/2;
	
	printf("\n\n A metado do numero digitado e: %4.2f \n\n",metade);
	system("PAUSE");

}
