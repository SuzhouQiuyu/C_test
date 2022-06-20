#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}

int main2()
{
	int a = 0;
	scanf("%d", &a);
	int ret = 0;
	ret = Fac(a);
	printf("%dµÄ½×³ËÎª%d",a,ret);
	return 0;
}