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
//	printf("���������룺");
//	scanf("%s", password);  //�������벢�����password������
//	printf("��ȷ�ϣ�N/Y��\n");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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

//�����в���
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
//		printf("�ҵ��ˣ�λ����%d", n + 1);
//	}
//	else
//	{
//		printf("û���ҵ�");
//	}
//}

//�Ż�������������ң�
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
//			printf("�ҵ��ˣ�λ����%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û���ҵ�");
//	}
//	return 0;
//}


//# include <stdio.h>
//
//int main()
//{
//	int k = 7;  //������ֵ
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);  //����������Ԫ�ظ���
//	int left = 0;  //���±�
//	int right = sz - 1;  //���±�
//	while (right >= left)
//	{
//		int mid = (left + right) / 2;  //ѭ����ÿ�ζ���Ҫ���¼���mid
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
//		printf("�Ҳ���");
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
//		printf("����������");
//		scanf("%s", &passwd);
//		if (strcmp (passwd,"123456") == 0)
//		{    
//			printf("������ȷ");
//			break;
//		}
//		else
//		{
//			printf("����������\n");
//		}
//	}
//	if (i >= 3)
//	{
//		printf("��¼ʧ��");
//	}
//	return 0;
//}


//����һ����ĸ�ַ������Ȳ�����20����ŵ�a�����У����ַ�����ÿ
//һ��Сд��ĸ��ȥ��B���ַ��Ľ��ֵ��ŵ���һ����������b�У����ȿ���
//����Ϊ20��������b�������ݡ����磺���롰AScxDmbTKzy����
//���������ĸ���Ԫ���롯B�������Ľ����ŵ�b�����У���������
//��bÿһ��Ԫ�ؽ��Ϊ33��54��43��32��55��

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