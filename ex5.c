#include<stdio.h>

void modify(int value); //함수 선언

void modify(int value) //함수 정의
{
	value = 200; //value를 200으로 바꾸는 함수
}
int main(void)
{
	int num = 100;
	printf("num = %d\n", num);

	return 0;
}