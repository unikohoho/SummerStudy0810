#include<stdio.h>

int main(void)
{
	int num = 10;
	int* p;

	p = &num;
	printf("���� num�� �� = %d\n", num); // 10 ��� 

	*p = 20; //p�� ����Ű�� ���� ���� 20����!, �� num�� 20���� �ٲ�
	printf("���� num�� �� = %d\n", num); //20 ���

	return 0;
}