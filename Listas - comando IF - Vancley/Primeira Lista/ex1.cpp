#include <stdio.h>
#include <stdlib.h>

main(){
	
	float n = 0;
	
	printf("Digite um numero: ");
	scanf("%f", &n);

	
	if(n >= 0){
		float A = n;
		printf("\n\n O numero digitado foi %4.2f, esse numero e positivo",A);
	}else{
		float B = n;
		printf("\n\n O numero digitado foi %4.2f, esse numero e negativo",B);
	} 
	system("PAUSE");
	
}
