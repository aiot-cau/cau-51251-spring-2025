#define _CRT_SECURE_NO_WARNINGS
// ������ �̸��� ���� ������ ���� ����
#include <stdio.h>
// int add(int, int);

int sum = 1;				// ���� ����	
int add(int a, int b){
	int sum = 0; 			//���� ����
	sum = a+b;
	printf("local sum = %d\n", sum);
	return sum;
}

int main(void)
{
	printf("sum = %d\n", add(sum, 1));
	printf("global sum = %d\n", sum);
	return 0;
}

