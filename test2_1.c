#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int isPrime(int n) //ʹ���β�n����������������ʵ��i
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;  
			//��break�����ø�ǿ��breakֻ��������ǰѭ����return0���Խ�����������
			//return0��ֱ������24�У�������һ��Լ����֤������������ֹͣisPrimeѭ��
		}
	}
	return 1;  //��j��2��n-1���Թ�����������nʱ����nΪ��������ʱj=n������forѭ��������1
}
int main()
{
	//��ӡ100-200֮�������
	int i = 0;
	for (i = 100; i <= 200; i++) 
	{
		if (isPrime(i) == 1)
		//�涨iΪ����ʱisPrime����1����֮Ϊ0
		{
			printf("%d ", i);
		}
	}
	return 0;
}