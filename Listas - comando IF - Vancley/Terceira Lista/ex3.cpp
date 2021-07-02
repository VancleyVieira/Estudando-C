#include <stdio.h>
#include <stdlib.h>

main(){
	
	int codigo = 0;
	
	printf("Digite seu codigo: ");
	scanf("%d", &codigo);
	
	if(codigo == 1){
		printf("\n\nOla chaves, tudo bem?\n\n");
	}
	else if(codigo == 2){
		printf("\n\nOla Quico, tudo bem?\n\n");
	}
	else if(codigo == 3){
		printf("\n\nOla D. Florinda, tudo bem?\n\n");
	}
	else if(codigo == 4){
		printf("\n\nOla Seu Madruga, tudo bem?\n\n");
	}else{
		printf("\n\nCodigo invalido, nao ha nenhum candidato com esse codigo cadastrado\n\n");
	}
	system("PAUSE");
}
