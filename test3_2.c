#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int binary_search(int m, int n, int arr1)
{
	int x = 0;
	int ret = 0;
	for (m; x < n; x++)
	{
		if (m == arr1[x])
		{
			ret = x;
		}
	}
	return ret;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int a = 7;
	int b = sizeof(arr) / sizeof(arr[0]);
	int c = binary_search(a,b,arr);
	if (c = 0) 
	{
		printf("û���ҵ�");
	}
	else 
	{
		printf("%d", c);
	}
	return 0;
}


//int search(int key, int a[], int length)  //keyΪҪ���������֣�lengthΪ���鳤��
//{
//	int ret = -1;  //ret��ֵ�ж��Ƿ���ڣ�-1Ϊ������
//	int i;
//	for (i = 0; i < length; i++) {
//		if (key == a[i]) {
//			ret = i;
//			break;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int a[] = { 1,3,7,12,19,25,6 };
//	int r = search(12, a, sizeof(a) / sizeof(a[0]));  //12ΪҪ���������֣�sizeof(a)/sizeof(a[0])�������鳤��
//	printf("%d\n", r);
//	return 0;
//}