#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float numero = 0, potencia = 0, potenciado = 0;

	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	printf("\n\n Voce quer potenciar esse numero a quanto?: ");
	scanf("%f", &potencia);
	
	//potenciado = pow.math(numero, potencia);
	potenciado = pow (numero , potencia);
	
	printf("\n\n A potenciacao desse numero e: %.2f",potenciado);
	system("PAUSE");

}
