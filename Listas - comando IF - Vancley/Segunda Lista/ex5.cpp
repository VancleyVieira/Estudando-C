#include <stdlib.h>
#include <stdio.h>
#include <string.h>

main(){

	//char inicial ['V'];
	char set_trabalho;
	float salario=0;
	
	printf("Digite a inicial do seu setor de trabalho: ");
	scanf("%s", &set_trabalho);
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	
	if(set_trabalho == 'V'){
		float aumento = salario*1.3222;
		printf("\n\nSeu salario teve um aumento, agora voce recebe %f \n\n",aumento);
	}else{
		printf("\n\nNao ouve aumento para o seu setor \n\n");
	}
	system("PAUSE");
}
