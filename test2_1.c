#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int isPrime(int n) //使用形参n接收主函数传来的实参i
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;  
			//比break的作用更强，break只能跳出当前循环，return0可以结束整个函数
			//return0后直接跳到24行，即：有一个约数就证明不是素数，停止isPrime循环
		}
	}
	return 1;  //当j从2到n-1都试过不可以整除n时，即n为素数，此时j=n，跳出for循环，返回1
}
int main()
{
	//打印100-200之间的素数
	int i = 0;
	for (i = 100; i <= 200; i++) 
	{
		if (isPrime(i) == 1)
		//规定i为素数时isPrime返回1，反之为0
		{
			printf("%d ", i);
		}
	}
	return 0;
}