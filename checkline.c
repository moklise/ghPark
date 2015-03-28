#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findChar(char *buffer);

int main(void){
	int NumberOfLine=0;
	FILE *fp;
	char fname[30];
	char buffer[100];
	int numberChar=0;

	printf( "파일이름을 입력해주세요 :" );
	scanf( "%s", fname );	

	if(!(fp = fopen(fname, "r"))){
		printf(" 찾을 수 없습니다.\n ");
	}

	while(fgets(buffer, 99, fp)){
		NumberOfLine++;

		numberChar += findChar(buffer);

	}

	printf( "총 라인의 개수는 %d 개 입니다.\n", NumberOfLine );
	printf( "줄 이라는 단어의 빈도는 %d 번 입니다.\n", numberChar );
}

int findChar(char *buffer){
	if(strstr(buffer, "줄")){
		return 1;
	}else{
		return 0;
	}
}
