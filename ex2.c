#include<stdio.h>

int main(void)
{
	int num = 10;//일반 변수
	int* p; //포인터 변수

	p = &num; //num을 가리킨다 ! num의 주소를 p에 대입
	printf("변수 num의 주소 : %p\n", &num);
	printf("포인터에 저장된 값 : %p\n", p);//포인터의 값
	printf("변수 num의 값 : %d\n", num);
	printf("포인터가 가리키는 것/ 가리키는 곳의 값%d\n", *p);

	return 0;

}