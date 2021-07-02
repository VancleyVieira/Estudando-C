#include <stdio.h>
#include <stdlib.h>

main(){
	
	int numero[100] = {};
	int i = 0;
	int maior = 0;
	
		for(i = 0; i < 100; i++){
			
			printf("Digite os elementos do vetor: ");
			scanf("%d", &numero[i]);
				
			if(numero[i] > maior){
				maior = numero[i];
			}
			
			if(numero[i] == 0){
				i = 99;
			}
		}
	
	for(i = 0; i < 100; i++){
		printf("\nConteudo do vetor: %d ",numero[i]);
	}
		printf("\nO maior numero digitado foi: %d",maior);
		
	printf("\n\n");
	system("PAUSE");
}
