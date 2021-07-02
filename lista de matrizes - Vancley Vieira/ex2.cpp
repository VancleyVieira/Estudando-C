#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int linha = 0, coluna = 0;
	int soma = 0;
	int matriz[3][3];
	int soma_diagonal = 0;
	

	for (linha = 0; linha < 3; linha++){
		
		for (coluna = 0; coluna < 3; coluna++){
			printf("Digite o elemento da linha %d, coluna %d, da matriz: ",linha+1,coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	printf("\nOs elementos da matriz são: \n\n");
	
	for (linha = 0; linha < 3; linha++){
		
		for (coluna = 0; coluna < 3; coluna++){
			
			 printf("%d\t",matriz[linha][coluna]);
		}
		printf("\n\n");
	}
	for (linha = 0; linha < 3; linha++){
		
		for (coluna = 0; coluna < 3; coluna++){
			soma = soma + matriz[linha][coluna];
		}
	}
	printf("\nDiagonal Principal da Matriz: \n\n");
	for (linha = 0; linha < 3; linha++){ 
	
		for (coluna = 0; coluna < 3; coluna++){
			
			if (linha == coluna){
				printf("%d\t",matriz[linha][coluna]);
				soma_diagonal = soma_diagonal + matriz[linha][coluna];
			}else{
				printf("-\t");
			}
		}
			
	    printf("\n\n");
	}
	
	printf("A soma dos elementos da matriz é: %d",soma);
	printf("\nA soma dos elementos da diagonal principal da matriz é: %d",soma_diagonal);
	printf("\n\n");
	system("pause");
}

