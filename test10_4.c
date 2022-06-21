#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main4()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i; i < sz; i++)
	{
		printf("元素%d的地址为%p\n", i, &arr[i]);
	}
	return 0;
}