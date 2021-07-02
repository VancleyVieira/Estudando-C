#include <stdio.h>
#include <stdlib.h>

main(){
	
	int numero[20] = {};
	int i = 0;
	
	for(i = 0; i <= 19; i++){
		
		printf("Digite os 20 elementos do vetor: ");
		scanf("%d", &numero[i]);
    }
	
	printf("----------VETOR-------- \n");
	system("pause");
	
	for(i = 0; i <= 20; i++){
		
		if(numero[i] > 20){
			printf("\nNumeros maiores que 20 dentro do vetor: %d",numero[i]);
	}
	}
	printf("\n\n");
	system("PAUSE");
}
