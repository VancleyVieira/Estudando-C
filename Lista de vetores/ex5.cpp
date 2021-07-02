#include <stdio.h>
#include <stdlib.h>

main(){
	
	int A[10] = {1,2,3,4,5,6,7,8,9,10};
	int B[10] = {11,12,13,14,15,16,17,18,19,20};
	int C[10] = {};
	int i = 0;
	
	printf("\n\n-----RESULTADO DA SOMA DOS VETORES-----\n\n");
	
    for(i = 0; i < 10; i++){
    	
        C[i] = A[i] + B[i];
        printf("Vetor A: %d + ",A[i]);
        printf("Vetor B: %d = ",B[i]);
    	
        printf("%d \n",C[i]);
    }
	
	printf("\n\n");
	system("PAUSE");
}
