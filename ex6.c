#include<stdio.h>

void modify(int* ptr);

int main(void)
{
	int num = 100;
	modify(&num); //주소를 모디파이함수에 보내줌
	printf("num = %d\n", num);
}
void modify(int *ptr) //함수 정의
{
	*ptr = 200; // 매개변수를 통하여 원본을 변경한다.
}