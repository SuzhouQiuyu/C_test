#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	char arr[] = { 'a',98 };
//	printf("strlen(arr2)=%d\n", strlen(arr));
//	return 0;
//}

//����������ӡ������ǰ3��Ԫ�ء�������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int i = 0;
//	for (i = 0;i<3;i++)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdefg";
//	int sz = sizeof(arr1) / sizeof(arr1[0]) - 1 ;
//	printf("%d\n", sz);
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,'\0'};
//	int str = strlen(arr2);
//	printf("%d\n", str);
//	int n = 0;
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%p\n", &arr[i]);
//		i++;
//	}
//	return 0;
//}	


//int main()
//{
//	int arr[3][5] = {{16,25,15,28,10},{5,215,21},12,26 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%p\n", &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//ð�������㷨��ԭ��
//�Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������
//��ÿһ������Ԫ����ͬ���Ĺ������ӿ�ʼ��һ�Ե���β�����һ�ԡ�����һ�㣬����Ԫ��Ӧ�û�����������
//������е�Ԫ���ظ����ϵĲ��裬�������һ����
//����ÿ�ζ�Խ��Խ�ٵ�Ԫ���ظ�����Ĳ��裬ֱ��û���κ�һ��������Ҫ�Ƚϡ�

//int main()
//{
//	int arr[] = { 24,16,35,18,29,82,12,47 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	int m = 0;
//	for (m = 0; m < sz; m++)
//	{
//		printf("%d ",arr[m]);
//	}
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;  //ð�����������
//	for (i; i < sz - 1; i++)  //����Ҫsz-1��
//	{
//		int j = 0;
//		for (j; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])  //����Ԫ�ش�С
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%p\n", &arr[0]);
//	printf("%p",arr);
//	return 0;
//}