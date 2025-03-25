#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int money, change;
	int price, c5000, c1000, c500, c100;

	printf("물건 값을 입력하시오: ");
	scanf("%d", &price); // 물건 값을 입력받는다. 

	printf("투입한 금액을 입력하시오: ");
	scanf("%d", &money); // 물건 값을 입력받는다. 
	change = money - price;	// 거스름돈을 change에 저장

	c1000 = change / 1000; // 남은 잔돈에서 1000원권의 개수를 계산한다. 
	change = change % 1000; //나머지 연산자를 사용하여 남은 잔돈을 계산한다. 

	c500 = change / 500; // 남은 잔돈에서 500원 동전의 개수를 계산한다. 
	change = change % 500; //나머지 연산자를 사용하여 남은 잔돈을 계산한다. 

	c100 = change / 100; // 남은 잔돈에서 100원 동전의 개수를 계산한다. 
	change = change % 100; //나머지 연산자를 사용하여 남은 잔돈을 계산한다. 

	printf("거스름돈은 다음과 같습니다.\n천원권: %d장\n", c1000);
	printf("오백원 동전: %d개\n", c500);
	printf("백원 동전: %d개\n", c100);
	return 0;
}