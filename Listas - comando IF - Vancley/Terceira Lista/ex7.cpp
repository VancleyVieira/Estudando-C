#include <stdio.h>
#include <stdlib.h>

main(){

	float A = 0, B = 0, C = 0;
	float result = 0;
	
	printf("Digite o valor referente a A: ");
	scanf("%f", &A);
	printf("Digite o valor referente a B: ");
	scanf("%f", &B);
	printf("Digite o valor referente a C: ");
	scanf("%f", &C);
	
	result = B + C;
	result = A + C;
	result = A + B;
	
	if((A > result) || (B > result) || (C > result)){
		printf("\nOs valores nao formam um triangulo");
		return(0);
	}
	
	if(A < result){
		printf("\nOs valores formam um triangulo");
	}
		else if(B < result){
			printf("\nOs valores formam um triangulo");
		}
			else if(C < result){
				printf("\nOs valores formam um triangulo");
			}
			
	if((A == B) && (A == C) && (B == C)){
		printf(" equilatero\n\n");
	}
	else if((A == B) || (A == C) || (B == C)){
		printf(" isosceles\n\n");
	}else{
		printf(" escaleno\n\n");
		}
	system("PAUSE");
}
