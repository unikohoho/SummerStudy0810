#include<stdio.h>

int main(void)
{
	int a = 10;
	char b = 'A';

	printf("a에 저장된 값 : %d\n",a);
	printf("a의 메모리 주소 : %p\n",&a);
	printf("b에 저장된 값 : %d\n",b);
	printf("b의 메모리 주소 : %p\n",&b);

	return 0;
}