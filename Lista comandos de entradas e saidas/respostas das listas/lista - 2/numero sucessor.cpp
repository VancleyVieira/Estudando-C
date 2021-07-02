#include <stdio.h>
#include <stdlib.h>

main(){
	
	float numero = 0;
	float sucessor = 0;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	sucessor = numero + 1;
	
	printf("O sucessor do numero digitado e: %4.2f \n\n",sucessor);
	system("PAUSE");
}
