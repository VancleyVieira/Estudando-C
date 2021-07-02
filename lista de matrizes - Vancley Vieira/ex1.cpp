#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int linha = 0, coluna = 0;
	int soma = 0;
	int matriz[2][2];
	
	for (linha = 0; linha <= 1; linha++){
		
		for (coluna = 0; coluna <= 1; coluna++){
			printf("Digite o elemento da linha %d, coluna %d, da matriz: ",linha+1,coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	printf("\nOs elementos da matriz são: \n\n");
	
	for (linha = 0; linha <= 1; linha++){
		
		for (coluna = 0; coluna <= 1; coluna++){
			
			 printf("%d\t",matriz[linha][coluna]);
		}
		printf("\n\n");
	}
	for (linha = 0; linha <= 1; linha++){
		
		for (coluna = 0; coluna <= 1; coluna++){
			soma = soma + matriz[linha][coluna];
		}
	}
	
	printf("A soma dos elementos da matriz é: %d",soma);
	printf("\n\n");
	system("pause");
}
