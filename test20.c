#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//输入一串字母字符，长度不超过20，存放到a数组中，将字符串中每
//一个小写字母减去’B’字符的结果值存放到另一个整型数组b中，长度可以
//定义为20，最后输出b数组内容。例如：输入“AScxDmbTKzy”，
//符合条件的各个元素与’B’计算后的结果存放到b数组中，最后输出数
//组b每一个元素结果为33，54，43，32，55。

//int main()
//{
//	char a[20] = { 0 };
//	char b[20] = { 0 };
//	scanf("%s",&a);
//	int c = 0;
//	int d = 0;
//	for (c = 0; c < strlen(a); c++)
//	{
//		if (a[c] >= 'a' && a[c] <= 'z')
//		{
//			b[d] = a[c] - 'B';
//			printf("%d ", b[d]);
//			d++;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//求最大公约数，可以使用辗转相除法。
//两个正整数a和b，他们的最大公约数等于a除以b的余数和b之间的最大公约数。
//比如10和25，25除以10余5，那么10和25的最大公约数等同于5和10之间的最大公约数。
//余数为0时，最大公约数是被除数。

//int main()
//{
//	int a = 0, b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b)
//	{
//		m = a % b;
//		a = b;
//		b = m;
//	}
//	printf("%d", b);
//
//	return 0;
//}

