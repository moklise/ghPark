#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findChar(char *buffer, char *);

int main(void){
	int NumberOfLine=0;
	FILE *fp;
	char fname[30];
	char buffer[100];
	int numberChar=0;
	char found[30];

	printf( "파일이름을 입력해주세요 :" );
	scanf( "%s", fname );	

	if(!(fp = fopen(fname, "r"))){
		printf(" 찾을 수 없습니다.\n ");
	}

	printf( "찾으실 단어를 입력해 주세요 :");
	scanf( "%s", found);

	while(fgets(buffer, 99, fp)){
		NumberOfLine++;
			numberChar += findChar(buffer, found);
		
	}

	printf( "총 라인의 개수는 %d 개 입니다.\n", NumberOfLine );
	printf( "%s 이라는 단어의 빈도는 %d 번 입니다.\n",found,  numberChar );
}

int findChar(char *buffer, char *found){

	if(strstr(buffer, found)){
		return 1;
	}else{
		return 0;
	}
}
