#include<stdio.h>

void swap(int x, int y)
{
	int tmp;

	tmp = x;//x�� �������� tmp�� �Ҵ�
	x = y;//y�� ���� ���� x�� �Ҵ�
	y = tmp;//tmp�� ������(��x��)�� y�� �Ҵ�
}
int main(void)
{
	int a = 100, b = 200;
	printf("a = %d b = %d\n", a, b);

	swap(a, b);

	printf("a = %d b = %d\n", a, b); // ��ȭ ���� !!!!
	return 0;

}
