#include<stdio.h>

void swap(int x, int y)
{
	int tmp;

	tmp = x;//x가 가진값을 tmp에 할당
	x = y;//y가 가진 값을 x에 할당
	y = tmp;//tmp가 가진값(구x값)을 y에 할당
}
int main(void)
{
	int a = 100, b = 200;
	printf("a = %d b = %d\n", a, b);

	swap(a, b);

	printf("a = %d b = %d\n", a, b); // 변화 없음 !!!!
	return 0;

}
