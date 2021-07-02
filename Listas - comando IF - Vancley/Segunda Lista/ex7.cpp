#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main(){
	int numero=0;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	if(numero % 2 == 0){
		printf("\n\nO numero digitado foi: %4.2i, este numero e PAR\n\n",numero);
	}else{
		printf("\n\nO numero digitado foi: %4.2i, este numero e IMPAR\n\n",numero);
	}
	system("PAUSE");
}
