#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ð������

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i;i < sz-1;i++)
	{
		int flag = 1;  //���������������Ѿ�����������
		int j = 0;
		for (j; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])  //������˳�򲻶Ե����ʱ������ѭ��
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;  //ѭ��������λ�÷���������flag��Ϊ0
			}
		}
		if (flag == 1)
			break;  //��flagΪ1ʱ������ѭ��
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