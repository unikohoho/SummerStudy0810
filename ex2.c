#include<stdio.h>

int main(void)
{
	int num = 10;//�Ϲ� ����
	int* p; //������ ����

	p = &num; //num�� ����Ų�� ! num�� �ּҸ� p�� ����
	printf("���� num�� �ּ� : %p\n", &num);
	printf("�����Ϳ� ����� �� : %p\n", p);//�������� ��
	printf("���� num�� �� : %d\n", num);
	printf("�����Ͱ� ����Ű�� ��/ ����Ű�� ���� ��%d\n", *p);

	return 0;

}