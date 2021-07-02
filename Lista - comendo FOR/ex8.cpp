#include<stdio.h>

 
int main() {
	
 int numero, resultado = 0;
 
 printf("Digite um numero: ");
 scanf("%d", &numero);
 
 if((numero >= 0) && (numero <= 100)){
 	
	 for (int i = 2; i <= numero / 2; i++) {
	    if (numero % i == 0) {
	       resultado++;
	       break;
	    }
	 }
 		
 	if(numero == 1){
 		printf("%d nao e um numero primo\n", numero);
 		return(0);
	 }
	 if (resultado == 0)
	    printf("%d e um numero primo\n", numero);
	 else
	    printf("%d nao e um numero primo\n", numero);
 }else{
		printf("Digite um numero entre 0 e 100 para efetuar o calculo\n");
	}
 return 0;
}
