#include <stdio.h>
#include <stdlib.h>

main(){
	
	float valor1 = 0, valor2 = 0;
	int codigo = 0;
	float resultado = 0;
	
	printf("Digite o priemiro valor: ");
	scanf("%f", &valor1);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &valor2);
	
	printf("\n---------Que operacao deseja realizar?--------\n");
	
	printf("\nDigite 1 para soma\n\nDigite 2 para subtracao\n\nDigite 3 para divisao\n\nDigite 4 para multiplicacao\n\nDigite aqui: ");
	scanf("%d", &codigo);
	
	if(codigo == 1){
		resultado = valor1 + valor2;
		printf("\n\nO resultado a operacao escolhida e: %4.2f\n\n ",resultado);
	}
	else if (codigo == 2){
		resultado = valor1 - valor2;
		printf("\n\nO resultado a operacao escolhida e: %4.2f\n\n ",resultado);	
	}
	else if (codigo == 3){
		resultado = valor1 / valor2;
		printf("\n\nO resultado a operacao escolhida e: %4.2f\n\n ",resultado);	
	}
	else if (codigo == 4){
		resultado = valor1 * valor2;
		printf("\n\nO resultado a operacao escolhida e: %4.2f\n\n ",resultado);	
	}else{
		printf("\n\nCodigo invalido, favor digitar um codigo valido. Obrigado\n\n");
	}
	system("PAUSE");
	
}
