#include <stdio.h>
#include <stdlib.h>

main(){
	
	float A = 0;
	float B = 0;
	float C = 0;
	float D = 0;
	
	printf("Digite um numero referente a letra A: ");
	scanf("%f", &A);
	printf("\n\n Digite um numero referente a letra B: ");
	scanf("%f", &B);
	printf("\n\n Digite um numero referente a letra C: ");
	scanf("%f", &C);
	
	D = A+C-B;
	
	printf("\n\n O resultados das operacoes e: %4.3f \n\n",D);
	system("PAUSE");
	
}
