#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main(){
	float A=0;
	float B=0;
	
	printf("Digite o valor de A: ");
	scanf("%f", &A);
	printf("Digite o valor de B: ");
	scanf("%f", &B);
	
	if(A == B){
		printf("\n\nOs valores sao iguais, digite valores diferentes para continuar\n\n");
		return 0;
	}
	
	if(A>B){
		printf("\n\nA = %4.2f e maior que B = %4.2f\n\n",A,B);
	}else{
		printf("\n\nB = %4.2f e maior que A = %4.2f\n\n",B,A);
	}
	system("PAUSE");
}
