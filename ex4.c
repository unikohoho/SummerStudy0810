#include<stdio.h>

int main(void)
{
	int x = 10, y = 20, z = 30;
	int* p;

	p = &x;
	printf("p = %p\n", p); //p�� ��(x�� �ּ�) ���
	printf("*p = %d\n\n", *p); // p�� ����Ű�� ���� ��(x�� ��) ���

	p = &y;
	printf("p = %p\n", p); //p�� ��(y�� �ּ�) ���
	printf("*p = %d\n\n", *p); // p�� ����Ű�� ���� ��(y�� ��) ���

	p = &z;
	printf("p = %p\n", p); //p�� ��(z�� �ּ�) ���
	printf("*p = %d\n\n", *p); // p�� ����Ű�� ���� ��(z�� ��) ���
	return 0;

}