#include <stdio.h>
#include <stdlib.h>

main(){

	float valor_empresa = 0, taxa_juros = 0, qtd_dias = 0;
	float valor_pagar = 0;
	
	printf("Digite o valor da empresa: ");
	scanf("%f", &valor_empresa);
	
	printf("\n\n Digite a taxa de juros pelo atraso: ");
	scanf("%f", &taxa_juros);
	
	printf("\n\n Digite a quantidade de dias de atrasdo: ");
	scanf("%f", &qtd_dias);
	
	valor_pagar = valor_empresa+(valor_empresa*(taxa_juros/100)*qtd_dias);
	
	printf("\n\n O total a ser pago e de: %4.2f R$ ",valor_pagar);
	system("PAUSE");
	
}
