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
//	int i = 0;  //�����ƶ���λ�ã���������0��2��4...
//	printf("����λ�ǣ�");  //���������1��3��5...
//	for(i = 30;i >= 0;i -= 2)  //���һλ���������ƶ����ƶ�0λ������i��СΪ0
//	//��ӡʱ��������ң��������������31λ�����һ������λ����Ҫ�����ƶ�30λ���ܵ������һλ1��λ��
//	{
//		printf("%d ", (a>>i)&1);
//	}
//	printf("\n");
//	printf("ż��λ�ǣ�");  //���������2��4��6...
//	for (i = 31; i >= 1; i -= 2)  //���һλż����Ҫ�����ƶ�1λ����i��СΪ1
//		//��ӡʱ��������ң��������������32λ�����һ��ż��λ����Ҫ�����ƶ�31λ���ܵ������һλ1��λ��
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
//	if (my_strlen(arr + 1) > 1)  //�ݹ���Ҫ����������
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
//num<10ʱֱ����ӡ���1+7+2+9
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
