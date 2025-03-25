#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char data = 'a';
	char key = 0xff;
	char encrpted_data, orig_data;

	printf("원래의 문자=%c\n", data);

	encrpted_data = data ^ key;
	printf("암호화된 문자=%c \n", encrpted_data);

	orig_data = encrpted_data ^ key;
	printf("복원된 문자=%c\n", orig_data);

	return 0;
}