#include <stdlib.h>
#include <stdio.h>
#include<math.h>

main(){

	int numero=0;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	if ((numero % 5 ==0) && (numero % 3 ==0)){
		printf("O NUMERO E DIVISIVEL\n");
	}else{
		printf("O NUMERO NAO E DIVISIVEL\n");
	}
	system("PAUSE");

}
