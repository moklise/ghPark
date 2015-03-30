#include  <stdio.h>
#include <math.h>
#define true 1

int main(void){
	int x=0, y, i=0;

	printf("10 진수를 입력하시오 : ");
	scanf("%d", &x);

	// 2진수 몇자리까지 가능한지 파악

		
	while( pow(2,i) < x ){
		i++;
	}
	

	// 최대 자리에서 한 자리씩 빼며 계산

	printf("\n");

	while( i >= 0 ){
		if( x >= pow(2,i)){
			printf("1");
			x-= pow(2,i);
		}else if( x == 1){
			printf("1");
		}else if( x == 0 ){
			printf("0");
		}
		i--;
		
	}	

	printf("\n");
}

		//printf("i : %d, x : %d\n", i, x);