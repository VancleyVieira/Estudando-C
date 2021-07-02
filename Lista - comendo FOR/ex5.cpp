#include <stdio.h>
#include <stdlib.h>

main(){
	
	int numero = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	printf("\nA tabuada do numero digitado e: \n");
	for(int i = 0; i <=10; i++){
		int result = numero * i;
		printf("\n%d x %d = %d",numero,i,result);
	}
	printf("\n\n");
	system("PAUSE");
}
