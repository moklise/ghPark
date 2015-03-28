#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	int NumberOfLine=0;
	FILE *fp;
	char fname[30];
	char buffer[100];

	printf( "파일이름을 입력해주세요 :" );
	scanf( "%s", fname );	

	if(!(fp = fopen(fname, "r"))){
		printf(" 찾을 수 없습니다.\n ");
	}

	while(fgets(buffer, 99, fp)){
		NumberOfLine++;
	}

	printf( "총 라인의 개수는 %d 개 입니다.", NumberOfLine );
}
