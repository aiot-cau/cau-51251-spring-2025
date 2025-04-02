#define _CRT_SECURE_NO_WARNINGS
// 성적을 받아서 학점을 결정하는 프로그램
#include <stdio.h>

int main(void)
{
	int score;
	
	printf("성적을 입력하시오: ");
	scanf("%d", &score);

	if (score >= 90)
		printf("학점A\n");
	else if (score >= 80)
		printf("학점B\n");
	else if (score >= 70)
		printf("학점C\n");
	else if (score >= 60)
		printf("학점D\n");
	else
		printf("학점F\n");

	return 0;
}
