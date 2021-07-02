#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int linha = 0, coluna = 0;
	int matrizX[3][3];
	int matrizY[3][3];
	int soma[3][3];
	
	for (linha = 0; linha <= 2; linha++){
		
		for (coluna = 0; coluna <= 2; coluna++){
			printf("Digite o elemento da linha %d, coluna %d, da matriz X: ",linha+1,coluna+1);
			scanf("%d", &matrizX[linha][coluna]);
		}
	}
	printf("\n\n------------------------------------------------------------\n\n");
		for (linha = 0; linha <= 2; linha++){
		
		for (coluna = 0; coluna <= 2; coluna++){
			printf("Digite o elemento da linha %d, coluna %d, da matriz Y: ",linha+1,coluna+1);
			scanf("%d", &matrizY[linha][coluna]);
		}
	}
	
	printf("\nOs elementos da matriz X são: \n\n");
	
	for (linha = 0; linha <= 2; linha++){
		
		for (coluna = 0; coluna <= 2; coluna++){
			
			 printf("%d\t",matrizX[linha][coluna]);
		}
		printf("\n\n");
	}
	
	printf("\nOs elementos da matriz Y são: \n\n");
	
	for (linha = 0; linha <= 2; linha++){
		
		for (coluna = 0; coluna <= 2; coluna++){
			
			printf("%d\t",matrizY[linha][coluna]);
		}
			printf("\n\n");
	}
	
	printf("\n\nO resultado da soma das matrizes é: \n\n");
	
	for (linha = 0; linha <= 2; linha++){
		
		for (coluna = 0; coluna <= 2; coluna++){
			soma[linha][coluna] = matrizX[linha][coluna] + matrizY[linha][coluna];
			printf("%d\t",soma[linha][coluna]);
		}
		printf("\n\n");
	}
	
	printf("\n\n");
	system("pause");
}
