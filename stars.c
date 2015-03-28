#include <stdio.h>

int main(void){
	int i, j, k;

	for(i=0 ; i < 20 ; i++){

		for( k = 20 - i ; k > 1 ; k--){
			printf(" ");
		} 

		for( j = 0; j < 2*i + 1 ; j++){
			printf("*");
		}

		printf("\n");
	}
}
