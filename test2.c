#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//		if(i % 10 == 9 )
//		{ 
//			count++;
//			//printf("%d ", i);
//		}
//	}
//	printf("%d",count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1145,25,431,152,168,441,625,124,192,482 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i <= 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d",max);
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" %d * %d = %-2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
