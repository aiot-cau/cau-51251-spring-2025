#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int money, change;
	int price, c5000, c1000, c500, c100;

	printf("���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &price); // ���� ���� �Է¹޴´�. 

	printf("������ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &money); // ���� ���� �Է¹޴´�. 
	change = money - price;	// �Ž������� change�� ����

	c1000 = change / 1000; // ���� �ܵ����� 1000������ ������ ����Ѵ�. 
	change = change % 1000; //������ �����ڸ� ����Ͽ� ���� �ܵ��� ����Ѵ�. 

	c500 = change / 500; // ���� �ܵ����� 500�� ������ ������ ����Ѵ�. 
	change = change % 500; //������ �����ڸ� ����Ͽ� ���� �ܵ��� ����Ѵ�. 

	c100 = change / 100; // ���� �ܵ����� 100�� ������ ������ ����Ѵ�. 
	change = change % 100; //������ �����ڸ� ����Ͽ� ���� �ܵ��� ����Ѵ�. 

	printf("�Ž������� ������ �����ϴ�.\nõ����: %d��\n", c1000);
	printf("����� ����: %d��\n", c500);
	printf("��� ����: %d��\n", c100);
	return 0;
}