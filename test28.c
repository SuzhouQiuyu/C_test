#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	char a = 'w';
//	char* p = &a;
//	*p = 'w';
//	return 0;
//}

//int main()
//{
//	char arr[] = "ab";
//	char* p = &arr;
//	printf("%s\n",arr);  //ab
//	printf("%s\n",p);  //ab
//	return 0;
//}

//int main()
//{
//	char* p = "ab";
//	*p = 'W';
//	printf("%s\n",p); 
//	return 0;
//}


//int main()
//{
//	//char arr1[] = "abcdefg";
//	//char arr2[] = "abcdefg";
//	const char* p1 = "abcdefg";
//	const char* p2 = "abcdefg";
//	if (p1 == p2)  
//	{
//		printf("haha");
//	}
//	else
//	{
//		printf("hehe");
//	}
//	return 0;
//}	

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* p[] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ",*(p[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		//printf("%d ", *parr[i]);  �õ�ÿ���������Ԫ��1��2��3
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d ", *(parr[i]+j));  //������Ԫ��+j
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* ( * pa)[5] = &arr;
//	return 0;
//}

void Print1(int arr[3][5], int x, int y)  //ʹ��������ʽ����
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//void Print2(int(*p)[5], int x, int y)  //ʹ��ָ����ʽ����
////����ĵ�ַӦ��ʹ������ָ����ա�
////����ָ��ָ���һά�����Ƕ�ά����ĵ�һ�У�����5������Ԫ�ء�
//{
//	//p��ָ���һ�������ָ�룬p+1����һ�����飨5��Ԫ�أ���pÿ��+1ָ����һ��
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//����1
//			//printf("%d ", *(*(p + i) + j));
//			//p + 1����i��ָ���±�Ϊi��һ�У������ú��ҵ�i��
//			//*(p + i)ȡ��i�е�һά����������i����Ԫ�صĵ�ַ
//			//*(p + i) + jȡ�ø����±�Ϊj��Ԫ�ص�ַ
//			//*(*(p + i) + j)�Ըõ�ַ������ȡ��i��j�е�Ԫ��
//	
//			//����2
//			//printf("%d ", (*(p + i))[j]);
//			//p + 1����i��ָ���±�Ϊi��һ�У������ú��ҵ�i��
//			//*(p + i)ȡ��i�е�һά������
//			//(*(p + i))[j]��ʾ������+�±�ȡ��������ÿһ��Ԫ��
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	Print1(arr, 3, 5);  //���鴫��
//	printf("\n");
//	Print2(arr, 3, 5);  //���鴫��
//	//������arr����Ԫ�ص�ַ����Ԫ���ǵ�һ�У�arr�����һ�еĵ�ַ��
//	//��һ����һ��һά���飬����������Print�е���һ��һά����ĵ�ַ��
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", *(arr + i));
//		printf("%d ", *(p + i));
//		printf("%d ", arr[i]);  //��arrΪ��ʼ��ַ�����±�Ϊi��Ԫ��
//		printf("%d ", p[i]);  //��pΪ��ʼ��ַ�����±�Ϊi��Ԫ��
//	}
//	return 0;
//}


int arr[5];
//arr��һ��5��Ԫ����ɵ���������
int* parr1[10];
//parr1��һ��10��Ԫ����ɵ�ָ�����飬ÿһ��Ԫ�ص�������int*
//parr1���Ⱥ�[10]���������飨[]�����ȼ��ߣ�
int(*parr2)[10];
//parr2��һ������ָ�룬��ָ��ָ��һ����10��int����Ԫ�ص�����
int(*parr3[10])[5];
//parr3���Ⱥ�[10]���������飬parr3����������[10]���������������int(*)[5]������
//int(*)[5];�����ڵ�������ʽ����������Ҳ��ָ�������ָ�����͡�
//���Կ�����Ϊparr3��һ����10��Ԫ�ص����飬ÿһ��Ԫ����һ������ָ�룬
//������ָ��ָ��һ������5��int����Ԫ�ص�����
