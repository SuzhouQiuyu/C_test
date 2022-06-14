#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int binary_search(int m, int n, int arr1[])
{
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (m < arr1[mid])
		{
			right = mid - 1;
		}
		else if (m > arr1[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main1()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int a = 6;
	int b = binary_search(a, sz, arr);
	if (b == -1)
	{
		printf("没有找到");
	}
	else 
	{
		printf("找到了，在第%d位",b);
	}
	return 0;
}