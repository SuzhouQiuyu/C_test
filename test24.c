#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct Stu  //����һ���ṹ�����͡���������struct Stu
//{
//	//��Ա��������������ѧ�����������
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu���ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = { "����",2200,"20220511" };
//	//.���������ʽṹ���Ա
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	return 0;
//}

//struct acc 
//{
//	char name[20];
//	int year[5];
//	char university[5];
//};
//int main()
//{
//	struct acc s = {"èè",2020,"����" };
//	printf("%d",s.year);
//	return 0;
//}

//struct abc
//{
//	char word[5];
//	int  bye;
//};
//int main()
//{
//	struct abc a = { "���",886 };
//	struct abc* ps = &a;
//	printf("%d\n", a.bye);
//	printf("%s\n", ( * ps).word);
//	printf("%d\n", ps->bye);
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,42,3,5,2,712,8,24,7 };
//	char * p = &arr;
//	*(p + 1 )= 100;
//	return 0;
//}


//void main()
//{
//    int i = 2;
//    printf(" % d, % d, % d, % d, \n", i++, ++i, i, i++);
//    printf("% d\n", i);
//}

//int main()
//{
//    int arrayA[4] = { 4, 3, 2, 1 };
//    int* p1 = NULL, * p2 = NULL;
//    p1 = arrayA, p2 = arrayA;
//    printf("arrayA[0]=%d ++*p1=%d ++(*p2)=%d *p1=%d *p2=%d\n", arrayA[0], ++ * p1, ++(*p2), *p1, *p2);
//    return 0;
//    /*��ӡ�����
//    arrayA[0]=6 ++*p1=6 ++(*p2)=6 *p1=6 *p2=6
//    ������printf������ӡ������������ִ��++(*p2)���ȶ�p2ָ���ַ��ֵ����++���㣬����
//    arrayA[0]��ֵ++�������5����++*p��++(*p)��Ϲ�������ͬ�ģ�p1Ҳ��ָ��arrayA[0]��ַ��
//    ����++*p1��arrayA[0]��ֵ���6��
//    */
//}
//
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,22,33,55,6,7,8,9};
//	int* p = &arr;
//	printf("%d",*(p+3));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[] = { &a,&b,&c };
//	printf("%d",*arr[2]);
//	return 0;
//}

