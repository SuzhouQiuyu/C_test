#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//打印二维数组
	//int arr[2][5] = { {1,2,3,4},{5,6} };
	//int m = 0;
	//for (m; m < 2; m++)
	//{
	//	int n = 0;
	//	for (n; n < 5; n++)
	//	{
	//		printf("%d",arr[m][n]);
	//	}
	//	printf("\n");
	//}


	//打印二维数组的元素地址
	int arr[2][5] = { {1,2,3,4},{5,6} };
	int m = 0;
	for (m; m < 2; m++)
	{
		int n = 0;
		for (n; n < 5; n++)
		{
			printf("&arr[%d][%d]=%p\n",m,n,&arr[m][n]);
		}
	}
	return 0;
}