#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char arr1[] = "Hello!";
	char arr2[20] = "##########";
	strcpy(arr2, arr1);
	printf("%s", arr2);
	return 0;
}