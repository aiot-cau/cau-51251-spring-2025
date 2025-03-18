#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char code = 'A';

	printf("%d %d %d \n", code, code+1, code+2); 	// 65 66 67 출력.
	printf("%c %c %c \n", code, code+1, code+2);		// A B C 출력. 
	return 0;
}