#include <stdio.h>
#include <stdlib.h>

main(){
	
	float X = 15;
	float Y = 5;
	float Soma = 0;
	float Sub = 0;
	float Divi = 0;
	float Mult = 0;
	
	Soma = X + Y;
	Sub = X - Y;
	Divi = X / Y;
	Mult = X * Y;
	
	printf ("\n\n O resultado da soma e %4.2f \n\n O resultado da Subtracao e: %4.2f \n\n O resultado da divisao e: %4.2f \n\n O resultado da Multiplicacao e %4.2f ",Soma,Sub,Divi,Mult);
	
	system ("PAUSE");
	
	
}
