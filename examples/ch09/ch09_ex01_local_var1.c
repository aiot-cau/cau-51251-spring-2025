#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;

	for(i = 0;i < 5; i++)
	{
		int temp = 1;
		printf("temp = %d\n", temp);
		temp++;
	}
}
