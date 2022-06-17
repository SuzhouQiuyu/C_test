#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void print1(int m)
{
	if (m > 9)
	{
		print(m / 10);
	}
	printf("%d ", m % 10);
}

int main1()
{
	unsigned int sum = 0;
	scanf("%d", &sum);
	print(sum);
	return 0;
}
