#include <stdio.h>
#include <stdlib.h>

main(){
	
	float n1 = 0, n2  =0, n3 = 0, n4 = 0;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("\n\nDigite o segundo numero: ");
	scanf("%f", &n2);
	printf("\n\nDigite o terceiro numero: ");
	scanf("%f", &n3);
	printf("\n\nDigite o quarto numero: ");
	scanf("%f", &n4);
	
	float raizn1 = n1*n1;
	float raizn2 = n2*n2;
	float raizn3 = n3*n3;
	float raizn4 = n4*n4;
	
	if(n3 >= 1.000){
		printf("\n\n Raiz do terceiro numero: %4.2f \n\n",raizn3);
	}else{
		printf("\n\n Raiz do primeiro numero: %4.2f \n raiz do segundo numero: %4.2f \n raiz do terceiro numero: %4.2f \n raiz do quarto numero: %4.2f\n\n",raizn1,raizn2,raizn3,raizn4);
	}
	
	system("PAUSE");
	
}
