#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
//Area=Pi*Raio2

main(){
	
	float  Area;
	float Pi = 3.14;
	float Raio = 0;
	
	printf ("\nDigite o valor do raio: ");
	scanf ("%f", &Raio);
	
	Area = Pi * Raio * Raio;
	
	printf("\n\n A area da circunferencia e: %4.2f \n\n",Area);
	
	system("PAUSE");
}
