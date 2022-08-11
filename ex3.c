#include<stdio.h>

int main(void)
{
	int num = 10;
	int* p;

	p = &num;
	printf("변수 num의 값 = %d\n", num); // 10 출력 

	*p = 20; //p가 가리키는 곳의 값을 20으로!, 즉 num이 20으로 바뀜
	printf("변수 num의 값 = %d\n", num); //20 출력

	return 0;
}