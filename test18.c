#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int a = 0;
//	for (a = 0; a < 100; a++)
//	{
//		printf("%d", a);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	printf("%p\n",arr);
//	printf("%p\n", &i);
//	//for (i = 0; i <= 15; i++)
//	//{
//	//	printf("hehe\n");
//	//	arr[i] = 0;
//	//}
//	return 0;
//}
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;  //将\0传给数组arr1
//}

//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);  //断言
//	assert(src != NULL);
//	while (*src++ = *dest++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "################";
//	char arr2[] = "HELLO WORLD";
//	my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	int* const p = &a;
//	*p = 20;
//	//int b = 100;
//	//p = &b;
//	printf("%d",a);
//	return 0; 
//}

//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);  //断言
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "################";
//	char arr2[] = "HELLO WORLD";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//} 

//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	return 0;
}