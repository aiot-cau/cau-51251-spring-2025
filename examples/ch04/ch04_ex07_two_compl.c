#define _CRT_SECURE_NO_WARNINGS
/* 2�� ���� ���α׷�*/
#include <stdio.h>

int main(void)
{
	int x = 3;
	int y = -3;

	printf("x = %08X\n", x);		// 8자리의16진수로출력한다
	printf("y = %08X\n", y);		// 8자리의16진수로출력한다
	printf("x+y = %08X\n", x+y);	// 8자리의16진수로출력한다
	
	return 0;
}
