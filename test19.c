#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("%d",a);
//	}
//	return 0;
//}


//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);  //输入密码并存放在password数组中
//	printf("请确认（N/Y）\n");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int sum = 0;
//	if ((m - 1) != 0)
//	{
//		sum = m * (m - 1);
//		for (m; m > 0; m--)
//		{
//			m--;
//			sum *= m;
//		}
//	}
//	else
//	{
//		sum = m;
//	}
//	printf("%d",sum);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 1;
//	int m = 0;
//	for (b = 1; b <= 4; b++)
//	{
//		n = 1;
//		for (a = 1; a <= b; a++)
//		{
//			n *= a;
//		}
//		m += n;
//	}
//	printf("%d", m);
//	return 0;
//}


//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 1;
//	int sum = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		ret *= a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	scanf("%d",&m);
//	int ret = 1;
//	while (m > 0)
//	{
//		ret *= m;
//		m--;
//	}
//	printf("%d",ret);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	scanf("%d",&m);
//	int n = 0;
//	int ret = 1;
//	for (n = 1; n <= m; n++)
//	{
//		ret *= n;
//	}
//	printf("%d", ret);
//	return 0;
//}

//数组中查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int m = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	while (arr[n] != m)
//	{
//		n++;
//	}
//	if (n < sz)
//	{
//		printf("找到了，位置是%d", n + 1);
//	}
//	else
//	{
//		printf("没有找到");
//	}
//}

//优化（有序数组查找）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int m = 0;
//	scanf("%d",&m);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int mid = 0;
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > m)
//		{
//			right = mid;
//		}
//		else if (arr[mid] < m)
//		{
//			left = mid;
//		}
//		else
//		{
//			printf("找到了，位置是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没有找到");
//	}
//	return 0;
//}


//# include <stdio.h>
//
//int main()
//{
//	int k = 7;  //被查找值
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);  //计算数组中元素个数
//	int left = 0;  //左下标
//	int right = sz - 1;  //右下标
//	while (right >= left)
//	{
//		int mid = (left + right) / 2;  //循环中每次都需要重新计算mid
//		if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	if (right < left)
//	{
//		printf("找不到");
//	}
//
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr1[] = "Hello World!";
//	char arr2[] = { '#','#','#','#','#','#','#','#','#','#','#','#' };
//	int m = 0;
//	//int n = (sizeof(arr1) / sizeof(arr1[0]))-2;
//	int n = strlen(arr1) - 1;
//	while (m < n)
//	{
//		arr2[m] = arr1[m];
//		arr2[n] = arr1[n];
//		m++;
//		n--;
//	}
//	printf("%s",arr2);
//	return 0;
//}




//int main()
//{
//	int passwd[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf("%s", &passwd);
//		if (strcmp (passwd,"123456") == 0)
//		{    
//			printf("密码正确");
//			break;
//		}
//		else
//		{
//			printf("请重新输入\n");
//		}
//	}
//	if (i >= 3)
//	{
//		printf("登录失败");
//	}
//	return 0;
//}


//输入一串字母字符，长度不超过20，存放到a数组中，将字符串中每
//一个小写字母减去’B’字符的结果值存放到另一个整型数组b中，长度可以
//定义为20，最后输出b数组内容。例如：输入“AScxDmbTKzy”，
//符合条件的各个元素与’B’计算后的结果存放到b数组中，最后输出数
//组b每一个元素结果为33，54，43，32，55。

//int main()
//{
//	char a[20] = { 0 };
//	char b[20] = { 0 };
//	scanf("%s",&a);
//	int c = 0;
//	int d = 0;
//	for (c = 0; a < strlen(a); c++)
//	{
//		if (a[c] >= 'a' && a[c] <= 'z')
//		{
//			a[c] - 'B' = b[d];
//			d++;
//		}
//		
//	}
//	return 0;
//}