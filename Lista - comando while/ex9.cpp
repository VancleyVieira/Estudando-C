#include <stdio.h>
#include <stdlib.h>

int primo(int numero){
	if(numero == 1){
		return(0);
	}
	int i = 2;
	while(i < numero){
		if(numero % i == 0){
			return(0);
		}
		i++;
	}
	return(1);
}

main(){
	
	int quantidade_numero_primos = 0;
	int numero = 0;
	
	int i = 0;
	
	while(i < 10){
		printf("Digite um numero: ");
		scanf("%d", &numero);
		i++;
		
		int ePrimo = primo(numero);
		if(ePrimo == 1){
			quantidade_numero_primos++;
		}
	}
	printf("A quantidade de numeros primos digitados foram: %d",quantidade_numero_primos);
}


