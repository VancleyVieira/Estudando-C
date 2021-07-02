#include <stdio.h>
#include <stdlib.h>

main(){
	
	float Valor_Real = 0;
	float cota = 5.12;
	float Valor_Dolar = 0;
	
	printf("Digite o valor em dolar: ");
	scanf("%f", &Valor_Dolar);
	
	Valor_Real = cota * Valor_Dolar;
	
	printf("\n\n O valor em Reais e: %4.2f ",Valor_Real);
	
	system("PAUSE");
	
	
}
