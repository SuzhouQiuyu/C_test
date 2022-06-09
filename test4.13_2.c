#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main1()
{
	int a;
	for (a = 2; a < 100; a++) {
		int i;
		int isPrime = 1;            //ËØÊýÎª1
		for (i = 2; i < a; i++) {
			if (a % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1) {
			printf("%d\n", a);
		}
	}
	return 0;
}