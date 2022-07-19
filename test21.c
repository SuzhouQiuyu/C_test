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
//上图printf返回值的介绍中，每一个这样的函数返回的都是打印字符的个数。
//上述程序最内层的printf函数打印的内容为“43”，共两个字符，即最内层的printf函数的返回值为2。
//从内向外第二层printf打印的内容为“2”，共一个字符，即从内向外第二层printf的返回值为1，
//最外层printf打印的内容“1”。即第4行代码共打印内容为“4321”。