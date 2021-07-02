#include <stdio.h>
#include <stdlib.h>

main(){
	
	float Naulas = 0;
	float Vaulas = 0;
	float salario = 0;
	
	printf("Digite o numero de aulas dadas: ");
	scanf("%f", &Naulas);
	
	printf("\n\nDigite o valor de cada aula dada: ");
	scanf("%f", &Vaulas);
	//Naulas = Naulas
	salario = Naulas * Vaulas;
	
	printf("\n\nO salario do professor e: %4.2f ",salario);
	
	system ("PAUSE");
}
