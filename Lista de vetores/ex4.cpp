#include <stdio.h>
#include <stdlib.h>

main(){
	
	int numero[20] = {};
	int i = 0;
	
	for(i = 0; i <= 19; i++){
		
		printf("Digite os 20 elementos do vetor: ");
		scanf("%d", &numero[i]);
    }
	
	printf("\n\n----------VETOR-------- \n\n");

	for(i = 0; i <= 19; i++){
		printf("\nConteudo do vetor: %d",numero[i]);
	}
	
	printf("\n\n Substituindo por 0 os numero pares: \n\n");
	
	for(i = 0; i <= 19; i++){
		if(numero[i] %2 == 0){
			printf("\nConteudo do vetor: 0");
		}else{
			printf("\nConteudo do vetor: %d",numero[i]);
		}
	}
	printf("\n\n");
	system("PAUSE");
}
