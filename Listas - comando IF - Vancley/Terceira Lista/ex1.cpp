#include <stdio.h>
#include <stdlib.h>

main(){
	
	float nota1 = 0, nota2 = 0;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	float media = (nota1 + nota2)/2;
	
	if(media < 6){
		printf("\n\nSua nota foi %4.2f, aluno REPROVADO!!\n\n",media);
	}
		else if((media >= 6) && (media <= 6.9)){
			printf("\n\nSua nota foi %4.2f, aluno esta de RECUPERACAO\n\n",media);
		}else{
			printf("\n\nSua nota foi %4.2f, aluno APROVADO!!\n\n",media);
		}
	
	system("PAUSE");
	
}
