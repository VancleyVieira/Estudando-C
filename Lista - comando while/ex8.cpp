#include <stdio.h>
#include <stdlib.h>

main(){
	
	int numero = 0;	
	int i = 2;
	int result = 0;
	
	printf("Digite um numero: ");
 	scanf("%d", &numero);
 
	if((numero >= 0) && (numero <= 100)){
		while (i <= numero / 2){
	    	i++;
			if (numero % i == 0) {
	       		result++;
	    	}
	 	}
		if (numero % i == 0){
	    	printf("%d e um numero primo\n", numero);
	 	}else{
	    	printf("%d nao e um numero primo\n", numero);
	    }
	}else{
		printf("Digite um numero entre 0 e 100 para efetuar o calculo\n");
	}
    
	system("PAUSE");
}
