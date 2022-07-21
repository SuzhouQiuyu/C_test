#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	printf("hello world\n");
//	main();
//	return 0;
//}

//接受一个整型值，按照顺序打印每一位。例如：输入“1234”，打印出“1 2 3 4”。
//void PRINT(int a)
//{
//	a	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	PRINT(a);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void print(int m)           //1.（1234）    4.（123）    7.（12）     10.（1）
//{
//	if (m > 9)              //2.（1234>9）  5.（123>9）  8.（12>9）   11.（1<9）
//	{
//		print(m / 10);      //3.（1234/10） 6.（123/10） 13.[12%10]    9.（12/10）
//	}
//	printf("%d ", m % 10);  //12.[(9)%10=1]13.[(6)%10=2] 14.[(3)%10=3]15.[(1)%10=4]
//}
//
//int main()
//{
//	unsigned int sum = 0;
//	scanf("%d", &sum);
//	print(sum);
//	return 0;
//}


//——————模拟实现strlen——————
//void my_strlen(char* p)
//{
//	int a = 0;
//	int count = 0;
//	while(*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	printf("%d",count);
//}
//
//int main()
//{
//	char arr[] = "Hello";
//	my_strlen(arr);
//	return 0;
//}
//void my_strlen(int* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	printf("%d",count);
//}
//int main()
//{
//	char arr[] = "123456789";
//	my_strlen(arr);
//	return 0;
//}

//递归
//int Facl(int a)
//{
//	int n = 0;
//	if (a >= 1)
//	{
//		n =  a * Facl(a-1);
//	}
//	else
//	{
//		return 1;
//	}
//	return n;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int ret = Facl(a);
//	printf("%d",ret);
//	return 0;
//}

//int fib(a)
//{
//	if (a > 2)
//	{
//		return fib(a - 1) + fib(a - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int ret = fib(a);
//	printf("第%d个数字是%d", a, ret);
//	return 0;
//}
//void fib(int a)
//{
//	int m = 1;
//	int n = 1; 
//	int count = 0;
//	printf("%d ", m);
//	printf("%d ", n);
//	while (count <= a-2)
//	{
//		int sum = m + n;
//		m = sum;
//		n = m;
//		printf("%d ", sum);
//		count++;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	fib(a);
//	return 0;
//}

//#include <stdio.h>
//
//int Fib(int n)
//{
//	int x = 1;
//	int y = 1;
//	int z = 1;  //当n<3时，不进入循环，直接返回z。
//	while (n > 2)
//	{
//		z = x + y;
//		x = y;
//		y = z;
//		n--;  //前两个数是1，第三个数字是2，m=3时进入循环，m--变为2
//	}
//	return z;
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int ret = 0;
//	ret = Fib(m);
//	printf("%d", ret);
//	return 0;
//}

