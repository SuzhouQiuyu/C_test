#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main2()
{
	char arr[] = { 'a','b','c','d','e','f'};
	int i = 0;
	for (i; i < 3; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}