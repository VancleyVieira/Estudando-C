#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int linha = 0, coluna = 0;
	int matriz[6][6];
	int maior = 0;
	
	for (linha = 0; linha <= 5; linha++){
		
		for (coluna = 0; coluna <= 5; coluna++){
			printf("Digite o elemento da linha %d, coluna %d, da matriz: ",linha+1,coluna+1);
			scanf("%d", &matriz[linha][coluna]);
		}
	}
	
	printf("\nOs elementos da matriz são: \n\n");
	
	for (linha = 0; linha <= 5; linha++){
		
		for (coluna = 0; coluna <= 5; coluna++){
			
			 printf("%d\t",matriz[linha][coluna]);
		}
		printf("\n\n");
	}
	
	for (linha = 0; linha <= 5; linha++){
		
		for (coluna = 0; coluna <= 5; coluna++){
			
			if(matriz[linha][coluna] > 10){
				maior += matriz[linha][coluna]/matriz[linha][coluna];
			}
		}
	}
	
	printf("\nA quantidade de numeros digitados na matriz maiores que '10' é igual a: %d",maior);
	printf("\n\n");
	system("pause");
}
