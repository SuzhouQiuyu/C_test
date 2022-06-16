#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

Printf()
{
	printf("hello world\n");
}

PRINTF()
{
	int i = 0;
	for (i; i < 3; i++)
	{
		Printf();
	}
}

int main1()
{
	int num = 0;
	PRINTF();
	return 0;
}