#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 32;
	a = ~a;		// NOT 연산자로 1의 보수로 만든다. 
	a = a + 0x01;	// 1을 더한다. 
	printf("a= %d \n", a);

	return 0;
}