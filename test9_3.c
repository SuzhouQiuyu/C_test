#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int count = 0;
int Fib1(int x)
{
	if (x == 3)
		count++;
	if (x <= 2)
		return 1;
	else
		return Fib(x - 1) + Fib(x - 2);
}

int main3()
{
	int num = 0;
	scanf("%d", &num);
	int ret = 0;
	ret = Fib(num);
	printf("第%d个斐波那契数为%d\n",num,ret);
	printf("第三个数字打印了%d次", count);
	return 0;
}