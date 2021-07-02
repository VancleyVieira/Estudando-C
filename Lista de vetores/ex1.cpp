#include <stdio.h>
#include <stdlib.h>

main(){
	
	int numero[40] = {};
	int i = 0;
	
	for(i = 0; i <= 39; i++){
		
		printf("Digite os 40 elementos do vetor: ");
		scanf("%d", &numero[i]);
    }
	
	printf("----------VETOR-------- \n");
	system("pause");
	
	for(i = 0; i <= 39; i++){
		
		if(numero[i] < 0){
			printf("\nConteudo do vetor: 0 ");
		}else{
			printf("\nConteudo do vetor: %d ",numero[i]);
		}
	}
	printf("\n\n");
	system("PAUSE");
}
