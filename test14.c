#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("%d\n", sizeof(char*));  //8
//	printf("%d\n", sizeof(short*));  //8
//	printf("%d\n", sizeof(int*));  //8
//	printf("%d\n", sizeof(double*));  //8
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;  //每2个十六进制数占一个字节，共4字节
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pb);
//	printf("%p\n", pb-1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int*p = test();
	*p = 20;
	return 0;
}