#define _CRT_SECURE_NO_WARNINGS #include<stdio.h>

int main(void)
{
	double num1, num2, num3;
	double sum, avg;

	printf("3개의 실수를 입력하시오: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	
	sum = num1 + num2 + num3;
	avg = sum / 3.0;
	
	printf("합계=%.2lf\n", sum);
	printf("평균=%.2lf\n", avg);
	
	return 0;
}