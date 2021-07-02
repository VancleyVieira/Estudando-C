#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int linha = 0, coluna = 0;
	int matriz[3][3];
	float soma_diagonal = 0;
	

	for (linha = 0; linha <= 2; linha++){
		
		for (coluna = 0; coluna <= 2; coluna++){
			printf("Digite o elemento da linha %d, coluna %d, da matriz: ",linha+1,coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	printf("\nOs elementos da matriz são: \n\n");
	
	for (linha = 0; linha <= 2; linha++){
		
		for (coluna = 0; coluna <= 2; coluna++){
			
			 printf("%d\t",matriz[linha][coluna]);
		}
		printf("\n\n");
	}
	
	printf("\nValores depois da substituição: \n\n");
	
	for (linha = 0; linha <= 2; linha++){ 
	
		for (coluna = 0; coluna <= 2; coluna++){
			
			if (matriz[linha][coluna] % 2 == 0){
	    		printf ("+1\t");
			}else{
				printf("-1\t");
			}
		}	
	    printf("\n\n");
	}
	
	printf("\n\n");
	system("pause");
}

