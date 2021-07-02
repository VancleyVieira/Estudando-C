#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main(){

int idade=0;
int A = 18;

printf("Digite sua idade: ");
scanf("%i", &idade);

if(idade >= 0 && idade <= 17){
	A = idade - A;
	A = A*-1;
	printf("\n\nmenor de idade e falta %i anos para completar a maioridade\n\n",A);
	}else{
		A = idade - A;
		printf("\n\nMaior de idade ha %i anos\n\n",A);
	}
system("PAUSE");
}


