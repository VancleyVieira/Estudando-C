#include <stdio.h>
#include <stdlib.h>

main(){
	
	float N = 0;
	
	printf("Digite um numero: ");
	scanf("%f", &N);
	
	if(N > 100){
		printf("\n\n %4.2f \n\n",N);
	}else{
		printf("\n\n 0 \n\n");
	}
	system("PAUSE");
}
