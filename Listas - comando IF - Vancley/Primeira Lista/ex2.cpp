#include <stdio.h>
#include <stdlib.h>

main(){
	
	int n = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	if(n%2 == 0){
		int P = n;
		printf("O numero digitado foi %d esse numero e PAR",P);
	}else{
		int I = n;
		printf("O numero digitado foi %d esse numero e IMPAR",I);
	}
	system("PAUSE");
}
