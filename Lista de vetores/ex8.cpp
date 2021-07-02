#include <stdio.h>
#include <stdlib.h>

main(){
	
	int vetor[40] = {};
	int i = 0;
	
	for(i = 0; i <= 39; i++){
		
		printf("Digite os 40 elementos do vetor: ");
		scanf("%d", &vetor[i]);
    }
	
	printf("\n\n---------------------VETOR-------------------\n");

	for(i = 0; i <= 39; i++){
		printf("\nConteudo do vetor: %d",vetor[i]);
	}
	
	printf("\n\nLendo cada posicao do vetor e retornando so os valores pares...\n");
	
	for(i = 0; i <= 39; i++){
		if(vetor[i] %2 == 0){
			printf("\nvalores pares do vetor: %d",vetor[i]);
		}
	}
	printf("\n\n");
	system("PAUSE");
}
