#include <stdio.h>
#include <stdlib.h>

main(){
	
	int numero = 0;	
	int maior = 0;
	
	for(int i = 0; i <= 9; i++){
		printf("Digite um numero: ");
		scanf("%d", &numero);
		if(numero > 18){
			maior += numero/numero;
		}
	}
	printf("Os numeros digitados maiores que 18 sao: %d",maior);
	printf("\n");
	system("PAUSE");
}
