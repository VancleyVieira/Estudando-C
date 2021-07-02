#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){

	float N1 = 0;
	float N2 = 0;
	float porcento = 0;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &N1);
	
	printf("\n\n Digite o segundo numero: ");
	scanf("%f", &N2);
	
	porcento = ((N1 + N2)*45)/100;
	
	printf("\n\n 45 porcento da soma dos dois numero digitados: %4.2f \n\n",porcento);
	system("PAUSE");


}

