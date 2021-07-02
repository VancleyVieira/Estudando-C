#include <stdlib.h>
#include <stdio.h>
#include <math.h>

main(){
	float salario=0;
	float aumento=0;
	
	printf("Digite o salario do funcionario: ");
	scanf("%f", &salario);
	
	if(salario < 2.500){
		aumento = salario*1.10;
		printf("\n\nSeu salario sofeu um aumento de 10%: %4.5f\n\n",aumento);
	}else{
		aumento = salario*1.25;
		printf("\n\nSeu salario sofeu um aumento de 10%: %4.5f\n\n",aumento);
	}
	system("PAUSE");
}
