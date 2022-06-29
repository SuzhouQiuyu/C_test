#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 5 % 2;
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;  // << -- 左移操作符，移动的是二进制位
//	printf("b = %d", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 3;      //000000000000000000000011
//	int b = 5;      //000000000000000000000101
//	int c = a ^ b;  //000000000000000000000110
//	printf("c = %d", c);
//	return 0;
//}

//交换两个变量的值，不使用新变量
//int main()
//{
//	int a = 5;  //011
//	int b = 3;  //101
//	printf("a = %d,b = %d\n", a, b);
//	a = a ^ b;  //a = 110
//	b = a ^ b;  //b = 011
//	a = a ^ b;  //a = 101
//	printf("a = %d,b = %d", a, b);
//	return 0;
//}
//
////求一个整数存储在内存中的二进制数中1的个数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("1的个数为%d", count);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 5;
//	int c = 8;
//	a = b = c + 2;
//	printf("%d", a);
//}

//int main()
//{
//	int a = 5;
//	if (!a)
//	{
//		printf("呵呵");
//	}
//}
//
//int main()
//{
//	int a = 5;
//	int* p = &a;  //&取地址
//	*p;  //*解引用
//	return 0;
//}

