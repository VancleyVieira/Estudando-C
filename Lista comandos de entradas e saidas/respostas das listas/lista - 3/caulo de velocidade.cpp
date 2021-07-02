#include <stdio.h>
#include <stdlib.h>

main(){
	
	float vi = 0, a = 0, t = 0, v = 0;
	
	printf("Digite a velocidade inicial do objeto: ");
	scanf("%f", &vi);
	printf("\n\n Digite a aceleracao do objeto: ");
	scanf("%f", &a);
	printf("\n\n Digite o tempo que o objeto levou: ");
	scanf("%f", &t);
	
	v = vi + a * t;
	
	printf("A velocidade do objeto e: %4.2f ",v);
	system("PAUSE");
	
}
