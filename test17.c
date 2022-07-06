#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int count_bit_one(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}

//int count_bit_one(int a)
//{
//	int count = 0;
//	int m = 0;
//	while (m < 32)
//	{
//		a >> m;
//		if (a & 1 == 1)
//		{
//			count++;
//		}
//		m++;
//	}
//	return count;
//}

//int count_diff_bit(m, n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//}
//
//int main()
//{
//	int m, n;
//	scanf("%d %d",&m,&n);
//	int count = count_diff_bit(m, n);
//	printf("%d", count);
//	return 0;
//}

//void Print(int a)
//{
//	int i = 0;  //向右移动的位置，从右往左0、2、4...
//	printf("奇数位是：");  //从右往左的1、3、5...
//	for(i = 30;i >= 0;i -= 2)  //最后一位奇数无需移动（移动0位），即i最小为0
//	//打印时候从左往右，从右往左计数第31位是最后一个奇数位，需要向右移动30位才能到达最后一位1的位置
//	{
//		printf("%d ", (a>>i)&1);
//	}
//	printf("\n");
//	printf("偶数位是：");  //从右往左的2、4、6...
//	for (i = 31; i >= 1; i -= 2)  //最后一位偶数需要向右移动1位，即i最小为1
//		//打印时候从左往右，从右往左计数第32位是最后一个偶数位，需要向右移动31位才能到达最后一位1的位置
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	int m = 0;
//	Print(a);
//	return 0;
//}

//void print(n)
//{
//	int i = 0;
//	for (i = 0; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	print(n);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str ++;
//	}
//	return count;
//}
//
//void reverse(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) > 1)  //递归需要有限制条件
//	{
//		reverse(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}

//void DigisSum(int a)
//{
//	int sum = 0;
//	while (a > 0)
//	{
//		sum += a % 10;
//		a = a / 10;
//	}
//	printf("%d", sum);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	DigisSum(a);
//	return 0;
//}
//1729 
//DigisSum(172)+1729%10
//DigisSum(17)+(1729/10)%10+1729%10
//DigisSum(1)+((1729/10)/10)%10+(1729/10)%10+1729%10
//num<10时直接相加。即1+7+2+9
//int DigitSum(unsigned int num)
//{
//	if (num >= 10)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d",ret);
//	return 0;
//}

double Pow(int n, int k)
{
	//n^k = n*n^(k-1)
	if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return (1.0 / Pow(n, -k));
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	double ret = Pow(n, k);
	printf("ret = %lf\n", ret);
	return 0;
}
