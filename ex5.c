#include<stdio.h>

void modify(int value); //�Լ� ����

void modify(int value) //�Լ� ����
{
	value = 200; //value�� 200���� �ٲٴ� �Լ�
}
int main(void)
{
	int num = 100;
	printf("num = %d\n", num);

	return 0;
}