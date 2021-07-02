#include <stdio.h>
#include <stdlib.h>

main(){

	int idade = 0;
	
	printf("Digite sua idedade: ");
	scanf("%d", &idade);
	
	if((idade >= 5) && (idade <= 7)){
		printf("\n\nSua categoria e a INFANTIL A\n\n");
	}
	else if((idade >= 8) && (idade <= 11)){
			printf("\n\nSua categoria e a INFANTIL B\n\n");
	}
	else if((idade >= 12) && (idade <= 13)){
			printf("\n\nSua categoria e a JUVENIL A\n\n");
	}
	else if((idade >= 14) && (idade <= 17)){
			printf("\n\nSua categoria e a JUVENIL B\n\n");
	}
	else if(idade >= 18){
		printf("\n\nSua categoria e a ADULTO\n\n");
	}
	system("PAUSE");

}
