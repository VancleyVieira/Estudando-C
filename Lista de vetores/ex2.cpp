#include <stdio.h>
#include <stdlib.h>

main() {
	
	int vetor[10], i = 0;
	
	for (i = 0; i < 10; i++){
		
		printf("Digite os 10 elementos do vetor: ");
		scanf("%d", &vetor[i]);
	}
	
	for (i = 0; i < 10; i++){
		
		printf("\nValores do vetor: %d   ",vetor[i]);
		
		if(vetor[i] == 0){
			printf("||  Valor de '0' encontrado!!");
		}
	}
}
