#include <stdio.h>
#include <stdlib.h>

main(){
	
	int i = 1;
	
	while(i < 20){
		if(i % 4 == 0){
			printf("O numero: %d e divisivel por 4 \n",i);
		}
		i++;
	}
	system("PAUSE");
}
