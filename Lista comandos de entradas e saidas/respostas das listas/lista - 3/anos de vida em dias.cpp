#include <stdio.h>
#include <stdlib.h>

main(){
	
	float anos = 0, meses = 0, dias = 0, total = 0;
	
	printf("Digite quantos anos de idade voce tem: ");
	scanf("%f", &anos);
    printf("\n\n Digite quantos meses de idade voce tem: ");
	scanf("%f", &meses);
	printf("\n\n Digite quantos dias de idade voce trem");
	scanf("%f", &dias);
	
	total = 365 * anos;
	total = 30 * meses + dias;
	
	printf("Voce tem:%4.2f anos de vida",total);
	system("PAUSE");
	
}
