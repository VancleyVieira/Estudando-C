#include <stdlib.h>
#include <stdio.h>
#include <string.h>>

main(){
	
	float altura = 0;
	float PI = 0;
	char masc['M'];
	char fem['F'];
	char option;
	
	printf("Digite M para Masculino e F para Feminino: ");
	scanf("%s", &option);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	
		if(option == 'M'){
			PI=altura*altura * 23;
			printf("Eai mano, seu peso ideal e: %4.2fKG \n\n",PI);
		}
		else if(option == 'F'){
			PI=altura*altura * 22;
			printf("Ola menina, seu peso ideal e: %4.2fKG \n\n",PI);
		}else{
				printf("Digite um valor valido!!\n\n");
			}
	
	system("PAUSE");
}


