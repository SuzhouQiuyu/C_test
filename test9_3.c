#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int count = 0;
int Fib1(int x)
{
	if (x == 3)
		count++;
	if (x <= 2)
		return 1;
	else
		return Fib(x - 1) + Fib(x - 2);
}

int main3()
{
	int num = 0;
	scanf("%d", &num);
	int ret = 0;
	ret = Fib(num);
	printf("��%d��쳲�������Ϊ%d\n",num,ret);
	printf("���������ִ�ӡ��%d��", count);
	return 0;
}