#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);  //��������
	printf("%d", c);
	return 0;
}