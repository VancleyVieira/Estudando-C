#include <stdlib.h>
#include <stdio.h>

main(){
	
	float n = 0;
	
	printf("Digite um numero: ");
	scanf("%f", &n);
	
	if(n >= 100){
		printf("\n\nO numero digitado: %4.2f e maior ou igual a 100\n\n",n);
	}else{
		printf("\n\nO numero digitado: %4.2f e menor que 100\n\n",n);
	}
	
	system("PAUSE");
}
