#include <stdio.h>
#include <stdlib.h>

main(){
	
	int n1 = 0, n2 = 0;
	
	printf("Digite um numero: ");
	scanf("%d",&n1);
	printf("Digite outro numero: ");
	scanf("%d",&n2);
	
	for(int i = n1; i <= n2; i++){
		printf("%d, ",i);
	}
	printf("\n\n");
	system("PAUSE");
}
