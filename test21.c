#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void PRINTF()
//{
//	printf("hello world");
//}
//
//void PRINT()
//{
//	printf("hello world");
//	PRINTF();
//}
//
//int main()
//{
//	printf("hello world");
//	PRINT();
//	return 0;
//}


//int SZ()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	return sizeof(arr) / sizeof(arr[0]);
//}
//
//void PRINT(int sz)
//{
//	printf("%d",sz);
//}
//
//int main()
//{
//	int sz = SZ();
//	PRINT(sz);
//	return 0;
//}


#include <stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}
//��ͼprintf����ֵ�Ľ����У�ÿһ�������ĺ������صĶ��Ǵ�ӡ�ַ��ĸ�����
//�����������ڲ��printf������ӡ������Ϊ��43�����������ַ��������ڲ��printf�����ķ���ֵΪ2��
//��������ڶ���printf��ӡ������Ϊ��2������һ���ַ�������������ڶ���printf�ķ���ֵΪ1��
//�����printf��ӡ�����ݡ�1��������4�д��빲��ӡ����Ϊ��4321����