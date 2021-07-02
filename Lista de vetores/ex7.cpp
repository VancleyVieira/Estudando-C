#include <stdio.h>
#include <stdlib.h>

main(){
	
	int vetor[20] = {};
	int X = 0;
	int i = 0;
	
	for(i = 0; i <= 19; i++){
		
		printf("Digite os 20 elementos do vetor: ");
		scanf("%d", &vetor[i]);
    }
    	printf("\n\nAgora digite o valor de X: ");
		scanf("%d", &X);
	
		printf("\n\n----------O valor de X e: %d----------\n\n",X);
		
	for(i = 0; i <= 19; i++){
		
		printf("valores do vetor: %d    ",vetor[i]);
		
		if(X == vetor[i]){
			printf("Valor de X encontado nessa posicao: %d\n",vetor[i]);
		}else{
			printf("Valor de X nao encontrado nessa posicao!!\n");
		}
	}
		
	
	printf("\n\n");
	system("PAUSE");
}
