#include <stdio.h>
#include <stdlib.h>

main(){
	
	int vetor[8] = {1,2,4,8,16,32,64,128};
	int maior = 0;
	int soma = 0;
	
		for(int i = 0; i < 8; i++){
    		soma = soma + vetor[i];
  		}
  		
		printf("\nO valor armazenado na oitava posicao do vetor e: %d",vetor[7]);
		printf("\nA soma dos elementos do vetor e: %d",soma);
		
	printf("\n\n");
	system("PAUSE");
}
