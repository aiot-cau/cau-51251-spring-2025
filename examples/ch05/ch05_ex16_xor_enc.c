#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char data = 'a';
	char key = 0xff;
	char encrpted_data, orig_data;

	printf("������ ����=%c\n", data);

	encrpted_data = data ^ key;
	printf("��ȣȭ�� ����=%c \n", encrpted_data);

	orig_data = encrpted_data ^ key;
	printf("������ ����=%c\n", orig_data);

	return 0;
}