#include<stdio.h>
void change();
void swap(int *px, int *py) 
{
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main(void)
{
	int a = 100, b = 200;
	printf("a = %d b = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d b = %d\n", a, b); 

	change();

	return 0;

}
void change()
{
	int a = 10, b = 20;
	printf("a = %d b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d b = %d\n", a, b);

}
