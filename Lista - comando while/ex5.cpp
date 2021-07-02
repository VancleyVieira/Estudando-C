#include <stdio.h>
#include <stdlib.h>

main(){
	
	int tab = 0;	
	
	printf("Digite um numero: ");
	scanf("%d", &tab);
	
	printf("\nA tabuada desse numero e: ");
	int i = 0;
	
	while(i <= 10){
		int result = tab * i;
		printf("\n%d x %d = %d",tab,i,result);
		i++;
	}
		printf("\n");
		system("PAUSE");	
	}
