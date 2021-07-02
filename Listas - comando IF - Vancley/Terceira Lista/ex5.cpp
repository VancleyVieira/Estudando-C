#include <stdio.h>
#include <stdlib.h>

main(){

	float A = 0, B = 0, C = 0;
	
	printf("Digite o valor de A: ");
	scanf("%f", &A);
	printf("\nDigite o valor de B: ");
	scanf("%f", &B);
	printf("\nDigite o valor de C: ");
	scanf("%f", &C);
	
	if((A > B) && (A > C)){
		printf("\n\nO valor de A: %4.2f e o maior dentre os tres digitados\n\n",A);
	}
	else if((B > A) && (B > C)){
		printf("\n\nO valor de B: %4.2f e o maior dentre os tres digitados\n\n",B);
	}else{
		printf("\n\nO valor de C: %4.2f e o maior dentre os tres digitados\n\n",C);
	}
	system("PAUSE");
}
