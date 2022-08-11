#include<stdio.h>

int main(void)
{
	int x = 10, y = 20, z = 30;
	int* p;

	p = &x;
	printf("p = %p\n", p); //p의 값(x의 주소) 출력
	printf("*p = %d\n\n", *p); // p가 가리키는 곳의 값(x의 값) 출력

	p = &y;
	printf("p = %p\n", p); //p의 값(y의 주소) 출력
	printf("*p = %d\n\n", *p); // p가 가리키는 곳의 값(y의 값) 출력

	p = &z;
	printf("p = %p\n", p); //p의 값(z의 주소) 출력
	printf("*p = %d\n\n", *p); // p가 가리키는 곳의 값(z의 값) 출력
	return 0;

}