#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Fib(int n)
{
	int x = 1;
	int y = 1;
	int z = 1;
	while (n > 2)
	{
		z = x + y;
		x = y;
		y = z;
		n--;  //ǰ��������1��������������2��m=3ʱ����ѭ����m--��Ϊ2
	}
	return z;
}

int main()
{
	int m = 0;
	scanf("%d", &m);
	int ret = 0;
	ret = Fib(m);
	printf("%d", ret);
	return 0;
}