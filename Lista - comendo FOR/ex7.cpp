#include <stdio.h>
#include <stdlib.h>

main(){
	
	int numero = 0;	
	int maior = 0;
	int menor = 0;
 	
 	printf("Digite um numero: ");
	scanf("%d", &numero);
 	
 	maior=numero;
 	menor=numero;
 	
	for(int i = 0; i <= 8; i++){
		printf("Digite um numero: ",i+1);
		scanf("%d", &numero);
 		
		if(numero > maior){
			maior = numero;
		}
		else if(numero < menor){
			menor = numero;
		}
	}
	printf("O menor numero digitado foi: %d",menor);
	printf("\nO menor numero digitado foi: %d",maior);
	printf("\n");
	system("PAUSE");
}
