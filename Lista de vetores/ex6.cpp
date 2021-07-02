#include <stdio.h>
#include <stdlib.h>

main(){
	
	int A[10] = {1,2,3,4,5,6,7,8,9,10};
	int B[10] = {};
	
	printf("\nO dobro de cada elemento do vetor A no vetor B: \n\n");
	
    for(int i = 0; i < 10; i++){
    	
        B[i] = A[i] * 2;
        printf("Vetor A: %d   ",A[i]);
        printf("Vetor B: %d \n",B[i]);
    }
	
	printf("\n\n");
	system("PAUSE");
}
