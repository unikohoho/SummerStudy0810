#include<stdio.h>

void modify(int* ptr);

int main(void)
{
	int num = 100;
	modify(&num); //�ּҸ� ��������Լ��� ������
	printf("num = %d\n", num);
}
void modify(int *ptr) //�Լ� ����
{
	*ptr = 200; // �Ű������� ���Ͽ� ������ �����Ѵ�.
}