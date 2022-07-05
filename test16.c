#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
//void Reverse(int arr[], int sz)
//{
//	int tmp = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	printf("\n");
//	Print(arr, sz);
//	return 0;
//}


//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 0,2,4,6,8 };
//	int tmp = 0;
//	int i = 0;
//	for(i = 0;i<5;i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 0,2,4,6,8 };
//	int arr[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = arr[i];
//	}
//	return 0;
//}


int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d", ret);
	return 0;
}