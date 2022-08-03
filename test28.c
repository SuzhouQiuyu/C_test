#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	char a = 'w';
//	char* p = &a;
//	*p = 'w';
//	return 0;
//}

//int main()
//{
//	char arr[] = "ab";
//	char* p = &arr;
//	printf("%s\n",arr);  //ab
//	printf("%s\n",p);  //ab
//	return 0;
//}

//int main()
//{
//	char* p = "ab";
//	*p = 'W';
//	printf("%s\n",p); 
//	return 0;
//}


//int main()
//{
//	//char arr1[] = "abcdefg";
//	//char arr2[] = "abcdefg";
//	const char* p1 = "abcdefg";
//	const char* p2 = "abcdefg";
//	if (p1 == p2)  
//	{
//		printf("haha");
//	}
//	else
//	{
//		printf("hehe");
//	}
//	return 0;
//}	

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* p[] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ",*(p[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		//printf("%d ", *parr[i]);  得到每个数组的首元素1、2、3
//		for (j = 0; j < 6; j++)
//		{
//			printf("%d ", *(parr[i]+j));  //数组首元素+j
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* ( * pa)[5] = &arr;
//	return 0;
//}

void Print1(int arr[3][5], int x, int y)  //使用数组形式接收
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//void Print2(int(*p)[5], int x, int y)  //使用指针形式接收
////数组的地址应该使用数组指针接收。
////数组指针指向的一维数组是二维数组的第一行，共有5个整型元素。
//{
//	//p是指向第一行数组的指针，p+1跳过一个数组（5个元素），p每次+1指向下一行
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//方法1
//			//printf("%d ", *(*(p + i) + j));
//			//p + 1跳过i行指向下标为i的一行，解引用后找到i行
//			//*(p + i)取得i行的一维数组名，即i行首元素的地址
//			//*(p + i) + j取得该行下标为j的元素地址
//			//*(*(p + i) + j)对该地址解引用取得i行j列的元素
//	
//			//方法2
//			//printf("%d ", (*(p + i))[j]);
//			//p + 1跳过i行指向下标为i的一行，解引用后找到i行
//			//*(p + i)取得i行的一维数组名
//			//(*(p + i))[j]表示数组名+下标取得数组中每一个元素
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	Print1(arr, 3, 5);  //数组传参
//	printf("\n");
//	Print2(arr, 3, 5);  //数组传参
//	//数组名arr是首元素地址，首元素是第一行，arr代表第一行的地址。
//	//第一行是一个一维数组，即传到函数Print中的是一个一维数组的地址。
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", *(arr + i));
//		printf("%d ", *(p + i));
//		printf("%d ", arr[i]);  //以arr为起始地址访问下标为i的元素
//		printf("%d ", p[i]);  //以p为起始地址访问下标为i的元素
//	}
//	return 0;
//}


int arr[5];
//arr是一个5个元素组成的整型数组
int* parr1[10];
//parr1是一个10个元素组成的指针数组，每一个元素的类型是int*
//parr1优先和[10]结合组成数组（[]的优先级高）
int(*parr2)[10];
//parr2是一个数组指针，该指针指向一个有10个int类型元素的数组
int(*parr3[10])[5];
//parr3优先和[10]结合组成数组，parr3是数组名，[10]是数组个数，其余int(*)[5]是类型
//int(*)[5];类似于第三个形式，即该类型也是指向数组的指针类型。
//所以可以认为parr3是一个有10个元素的数组，每一个元素是一个数组指针，
//该数组指针指向一个包含5个int类型元素的数组
