#include <stdio.h>
#include <stdlib.h>

main(){
	
	float P = 0;
	
	printf("Digite o peso dos peixes pescados: ");
	scanf("%f", &P);
	
	if(P > 50){
		printf("\n\n O peso dos peixes e: %4.2fkg",P);
		float E = P - 50;
		printf("\n\n O peso excedido foi de %4.2fkg ",E);
		float M = E * 4;
		printf("\n\n O valor da multa a se pagar e de: %4.2f \n\n",M);
		
	}else{
		printf("\n\n O peso dos peixes e: %4.2fkg",P);
		printf("\n\n O regulamento e de 50kg, Multa nao aplicavel");
	}
	system("PAUSE");


}
