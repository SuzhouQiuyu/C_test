#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void swap1(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}

void swap2(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 10;
	int b = 20;
	swap1(a, b);
	printf("a=%d,b=%d\n", a, b);
	swap2(&a, &b);
	printf("a=%d,b=%d", a, b);
	return 0;
}