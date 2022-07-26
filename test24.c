#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct Stu  //创建一个结构体类型。类型名：struct Stu
//{
//	//成员变量。用来描述学生的相关属性
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//使用struct Stu类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "张三",2200,"20220511" };
//	//.操作符访问结构体成员
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
//	struct acc s = {"猫猫",2020,"江西" };
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
//	struct abc a = { "你好",886 };
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
//    /*打印结果：
//    arrayA[0]=6 ++*p1=6 ++(*p2)=6 *p1=6 *p2=6
//    分析：printf函数打印自右向左，首先执行++(*p2)，先对p2指向地址的值进行++运算，即将
//    arrayA[0]的值++运算后变成5，因++*p与++(*p)结合规则是相同的，p1也是指向arrayA[0]地址，
//    所以++*p1后arrayA[0]的值变成6。
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

