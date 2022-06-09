#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void swap(int x, int y)
//{
//	int z;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{	
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap(a, b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
int main3()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;
	printf("a = %d", a);
}