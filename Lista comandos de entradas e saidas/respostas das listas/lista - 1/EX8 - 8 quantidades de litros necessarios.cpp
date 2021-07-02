#include <stdio.h>
#include <stdlib.h>

main(){
	
	float preco_litro = 0;
	float qtdkmporlitro = 0;
	float distancia_percorrer = 0;
	float litros_necessarios = 0;
	
	printf("Digite o valor do litro de gasolina: ");
	scanf("%f", &preco_litro);
	
	printf("\n\n Digite quantos KM seu carro faz com um litro: ");
	scanf("%f", &qtdkmporlitro);
	
	printf("\n\n Digite a distancia que deseja percorrer: ");
	scanf("%f", &distancia_percorrer);
	
	litros_necessarios = (distancia_percorrer + preco_litro) / qtdkmporlitro;
	
	printf("\n\nVoce vai precilar de %4.2f litros de gasolina para percorrer esse percurso ",litros_necessarios);
	
	system("PAUSE");
} 
