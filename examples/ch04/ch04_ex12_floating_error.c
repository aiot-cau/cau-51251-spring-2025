#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x;

	x = (1.0e20 + 5.0)-1.0e20;	
	printf("%f \n",x);
	return 0;
}
