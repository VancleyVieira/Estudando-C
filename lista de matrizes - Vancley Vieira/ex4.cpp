#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int linha = 0, coluna = 0;
	int matriz[3][3];
	int multiplicacao = 0;
	
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
	
	printf("\nOs elementos da matriz multiplicados por 5 são: \n\n");
	
	for (linha = 0; linha <= 2; linha++){
		
		for (coluna = 0; coluna <= 2; coluna++){
			
			multiplicacao = matriz[linha][coluna] * 5;
			printf("%d\t",multiplicacao);
		}
			printf("\n\n");
	}

	printf("\n\n");
	system("pause");
}
