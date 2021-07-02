#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main(){
	
	float numero=0;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	float raiz = sqrt(numero);
	
	if(raiz > 7 ){
		float result = raiz + 3;
		
		printf("\n\n O numero final e: %4.2f \n\n", result);
	}else{
		printf("\n\n A raiz e menor que 7 \n\n");
	}
	system("PAUSE");
}
