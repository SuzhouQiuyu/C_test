#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main1()
{
	char arr1[] = "Hello!";
	char arr2[20] = "##########World";
	printf("%s\n", arr2);
	strcpy(arr2, arr1);
	printf("%s", arr2);
	return 0;
}