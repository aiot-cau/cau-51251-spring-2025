#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double c_to_f(double c_temp); 	// ÇÔ¼ö ¿øÇü

int main(void)
{
	printf("¼·¾¾ %lfµµ´Â È­¾¾ %lfÀÔ´Ï´Ù.  \n", 36.0, c_to_f(36.0));
	return 0;
}

double c_to_f(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}
