#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int my_strlen1(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main1()
{
	char arr[] = "Hello";
	int len = my_strlen(arr);
	printf("len=%d", len);
	return 0;
}