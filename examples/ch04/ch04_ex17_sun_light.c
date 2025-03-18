#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double light_speed = 300000; 	// ���� �ӵ��� �����ϴ� ����(300000km/sec)
	double distance = 149600000;	// �¾�� ���� ���� �Ÿ��� �����ϴ� ����
					// 149600000km�� �ʱ�ȭ�Ѵ�. 
	double time;			// �ð��� ��Ÿ���� ����

	time = distance / light_speed;	// �Ÿ��� ���� �ӵ��� ������. 

	printf("빛의속도는 %lfkm/s \n", light_speed);	
	printf("태양과지구와의거리 %lfkm \n", distance);
	printf("도달시간은 %lfs\n", time);	// �ð��� ����Ѵ�. 
	return 0;
}