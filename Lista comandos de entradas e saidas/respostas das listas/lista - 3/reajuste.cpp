#include <stdio.h>
#include <stdlib.h>

main(){
	
	float valor_salario = 0;
	float reajuste = 0;
	float salariofinal = 0;
	float desconto = 0;
	
	printf("Digite o seu salario: ");
	scanf("%f", &valor_salario);
	
	printf("\n\nDigite o desconto INSS: ");
	scanf("%f", &reajuste);
	
	desconto = (valor_salario * reajuste) /100;
	salariofinal = valor_salario - desconto;
	
	printf("\n\n O salario com reajuste e: %4.2f \n\n",salariofinal);
	
	system ("PAUSE");
}
