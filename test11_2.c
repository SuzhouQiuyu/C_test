#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//int arr[] = { 1,2,3,4,5,6 };
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);  //数组首元素地址

	//printf("%d\n", *arr);  //数组内首元素解引用


	int arr[] = { 1,2,3,4,5,6 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	return 0;
}