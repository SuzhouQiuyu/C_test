#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int ADD(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int(*p)(int, int) = ADD;
//	//printf("%d\n", p(2, 3));
//	//printf("%d\n", (*p)(2, 3));
//	int* p1 = &ADD;
//	printf("%p\n",p1);
//	int(*p2)(int ,int) = ADD;
//	printf("%p\n", p2);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2,3));
//	}
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
//char* (*pf)(char*, const char*) = my_strcpy;  //ָ��pfָ��my_strcpy
//char* (*pfrr[4])(char*, const char*) = { 0 };  //����ָ������



//������
//void menu()
//{
//	printf("#####################\n");
//	printf("###1.Add     2.Sub###\n");
//	printf("###3.Mul     4.Div###\n");
//	printf("#####################\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				printf("��������������:>");
//				scanf("%d %d", &a, &b);
//				printf("%d\n", Add(a, b));
//				break;
//			case 2:
//				printf("��������������:>");
//				scanf("%d %d", &a, &b);
//				printf("%d\n", Sub(a, b));
//				break;
//			case 3:
//				printf("��������������:>");
//				scanf("%d %d", &a, &b);
//				printf("%d\n", Mul(a, b));
//				break;
//			case 4:
//				printf("��������������:>");
//				scanf("%d %d", &a, &b);
//				printf("%d\n", Div(a, b));
//				break;
//			case 0:
//				printf("�˳�\n");
//			default:
//				printf("ѡ�����\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}



//void menu()
//{
//	printf("#####################\n");
//	printf("###1.Add     2.Sub###\n");
//	printf("###3.Mul     4.Div###\n");
//	printf("#####################\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int input = 0;
//	int* (*parr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		if (input > 0 && input < 5)
//		{
//			printf("�����������:>");
//			scanf("%d %d", &a, &b);
//			int ret = parr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	} while (input);
//	return 0;
//}



//void menu()
//{
//	printf("#####################\n");
//	printf("###1.Add     2.Sub###\n");
//	printf("###3.Mul     4.Div###\n");
//	printf("#####################\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void Calc(int (*pf)(int ,int))
//{
//	int a = 0;
//	int b = 0;
//	printf("��������������:>");
//	scanf("%d %d", &a, &b);
//	printf("%d\n", pf(a, b));
//}	
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				Calc(Add);
//				break;
//			case 2:
//				Calc(Sub);
//				break;
//			case 3:
//				Calc(Mul);
//				break;
//			case 4:
//				Calc(Div);
//				break;
//			case 0:
//				printf("�˳�\n");
//			default:
//				printf("ѡ�����\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int(*pfarr[10])(int, int); 
//	int(*(*ppfarr)[10])(int, int) = pfarr;
//	return 0;
//}


void Print(char* str)
{
	printf("hello %s", str);
}
void test (void(*p)(char*))
{
	p("world");
}
int main()
{
	test(Print);
	return 0;
}