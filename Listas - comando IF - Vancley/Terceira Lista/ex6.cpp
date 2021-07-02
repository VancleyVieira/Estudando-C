#include <stdio.h>
#include <stdlib.h>

main(){
	
	char opcao;
	float reais = 0;
	float resultado = 0;
	
	printf("Digite a quantidade de reais: ");
	scanf("%f", &reais);
	
	printf("\n---------Que conversao deseja realizar?--------\n");
	
	printf("\nDigite E para EURO\n\nDigite L para LIBRA\n\nDigite D para DOLAR\n\nDigite I para IANE\n\nDigite aqui: ");
	scanf("%s", &opcao);
	
	if((opcao == 'E') || (opcao == 'e')){
		resultado = reais/2.617;
		printf("\nO resultado da conversao foi de %4.2f euros\n\n",resultado);
	}
		else if((opcao == 'L') || (opcao == 'l')){
			resultado = reais/3.816;
			printf("\nO resultado da conversao foi de %4.2f libras\n\n",resultado);
		}
			else if((opcao == 'D') || (opcao == 'd')){
				resultado = reais/2.071;
				printf("\nO resultado da conversao foi de %4.2f dolares\n\n",resultado);
			}
				else if((opcao == 'I') || (opcao == 'i')){
					resultado = reais/0.018;
					printf("\nO resultado da conversao foi de %4.2f ianes\n\n",resultado);
				}else{
					printf("\nCodigo inesistente, favor digitar um codigo valido!!\n\n");
				}
	system("PAUSE");
}
