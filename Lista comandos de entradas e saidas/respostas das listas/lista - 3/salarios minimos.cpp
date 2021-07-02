#include <stdio.h>
#include <stdlib.h>

main(){
	
	float salario_minimo = 1.200;
	float salario_funcionario = 0;
	float qtd_salario_minimo = 0;
	
	printf ("Digite seu salario: ");
	scanf("%f", &salario_funcionario);
	
	qtd_salario_minimo = salario_funcionario / salario_minimo;
	
	printf("\n\n Voce recebe %4.2f salarios minimos \n\n",qtd_salario_minimo);
	
	system ("PAUSE");
}
