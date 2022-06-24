#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//冒泡排序

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i;i < sz-1;i++)
	{
		int flag = 1;  //假设数组中数字已经是有序排列
		int j = 0;
		for (j; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])  //当存在顺序不对的情况时，进入循环
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;  //循环内数字位置发生交换，flag置为0
			}
		}
		if (flag == 1)
			break;  //当flag为1时，跳出循环
	}
}

int main1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}