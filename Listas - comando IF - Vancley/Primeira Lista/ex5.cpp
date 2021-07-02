#include <stdio.h>
#include <stdlib.h>

main(){
	
	float C = 0;
	float N = 0;
	
	printf("Digite seu codigo: ");
	scanf("%f", &C);
	
	
	printf("\n\n Digite o numero de horas trabalhadas: ");
	scanf("%f", &N);
	
	printf("\n\n O codigo do operario e: %4.2f",C);
	printf("\n\n O numero de horas trabalhadas e: %4.2fhrs",N);
		
	float salario = N*10;
	printf("\n\n O salario do operario deu %4.2fR$",salario);
	
	if(N > 50){
		
		float E = (N - 50 )* 20;
		printf("\n\n O valor das horas excedidas e de %4.2fR$ \n\n",E);
		
		float salario_final = E + salario;
		printf("\n\n O salario final do operario junto com as horas excedidas deu %4.2fR$ \n\n",salario_final);
		
		
	}else{
		printf("\n\n O Valor de das horas excedidas e de 0R$");
		printf("\n\n O salario final  do operario junto com as horas excedidas deu %4.2fR$ \n\n",salario);
	}
	system("PAUSE");
	
}

