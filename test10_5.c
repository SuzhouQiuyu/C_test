#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	//��ӡ��ά����
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


	//��ӡ��ά�����Ԫ�ص�ַ
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