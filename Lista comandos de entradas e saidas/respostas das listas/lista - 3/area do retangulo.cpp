#include <stdio.h>
#include <stdlib.h>

main(){
	
	float area = 0;
	float base = 0;
	float altura = 0;
	
	printf("Digite a base do retangulo: ");
	scanf("%f", &base);
	
	printf("\n\n Digite a altuta do retanculo: ");
	scanf("%f", &altura);
	
	area = base*altura;
	
	printf("\n\n A area do retangulo e: %4.2f \n\n",area);
	system("PAUSE");
	
	
}
