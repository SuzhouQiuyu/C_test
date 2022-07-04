
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  
void main()
{
    int i = 2;
    printf(" % d, % d, % d, % d, \n", i++, ++i, i, i++);
    printf("% d\n" , i);
}
//int main()
//{
//    int arrayA[4] = { 4, 3, 2, 1 };
//    int* p1 = NULL, * p2 = NULL;
//    p1 = &arrayA[1];
//    printf("前：arrayA[1]=%d arrayA[2]=%d\n", arrayA[1], arrayA[2]);
//    printf("++(*p1++)=%d ++*p1++=%d *p1=%d\n", ++(*p1++), ++ * p1++, *p1);
//    printf("后：arrayA[1]=%d arrayA[2]=%d\n", arrayA[1], arrayA[2]);
//    return 0;
//    /*打印结果：
//    前：arrayA[1]=3 arrayA[2]=2
//    ++(*p1++)=3 ++*p1++=4 *p1=1
//    后：arrayA[1]=4 arrayA[2]=3
//    分析(第二行打印代码)：
//    1.先执行++*p1++：后缀运算符的优先级高于前缀运算符，所以p1++先结合（后进行++运算），p1指向的地址和*
//    结合，取出*p1的值3，然后和前面的++结合将该地址的值自增运算，即将arrayA[1]中的数由3变为4，执行完后p1
//    执行后缀运算符++，使得p1指向&arrayA[2]。
//    2.再执行++(*p1++):()的优先级最高，先执行(*p1++),()中后缀运算符++的优先级高于*，p1++先结合（后进行++运算），
//    先取值后自增：(*p1++)先取arrayA[2]地址中的值为2，在和前面的++结合将该地址的自增运算后变为3，执行完后p1
//    执行后缀运算符++，使得p1指向&arrayA[3]。
//    3.最后执行*p1：*p1的值即&arrayA[3]，*p1为1。
//    */
//}
//
//int main()
//{
//    int arrayA[4] = { 4, 3, 2, 1 };
//    int* p1 = NULL, * p2 = NULL;
//    p1 = arrayA;
//    printf("arrayA[0]=%d, (*p1)++=%d (*p1)++=%d *p1=%d\n", arrayA[0], (*p1)++, (*p1)++, *p1);
//    return 0;
//    /*打印结果：
//    arrayA[0]=6, (*p1)++=5 (*p1)++=4 *p1=6
//    分析：printf函数打印自右向左，(*p1)++先取出p1指向地址的值打印，然后再将p1指向地址的值++运算。
//    */
//}
//
//
//int main()
//{
//    int arrayA[4] = { 4, 3, 2, 1 };
//    int* p1 = NULL, * p2 = NULL;
//    p1 = arrayA, p2 = arrayA;
//    printf("++(*p2)=%d\n",++(*p2));
//    printf("++*p1=%d\n", ++*p1);
//    return 0;
//}
//
//
//
//
//
//
//
//
//int main()
//{
//    int arrayA[4] = { 4, 3, 2, 1 };
//    int* p1 = NULL, * p2 = NULL;
//    p1 = arrayA, p2 = arrayA;
//    printf("++*p1=%d *p1++=%d\n", ++*p1, *p1++);
//    return 0;
//}
//
//
//
//
//
//
//
//
//int main()
//{
//    int arrayA[4] = { 4, 3, 2, 1 };
//    int* p1 = NULL, * p2 = NULL;
//    p1 = arrayA, p2 = arrayA;
//    printf("arrayA[0]=%d ++*p1=%d ++(*p2)=%d *p1=%d *p2=%d\n", arrayA[0], ++*p1, ++(*p2), *p1, *p2);
//    return 0;
//    /*打印结果：
//    arrayA[0]=6 ++*p1=6 ++(*p2)=6 *p1=6 *p2=6
//    分析：printf函数打印自右向左，首先执行++(*p2)，先对p2指向地址的值进行++运算，即将
//    arrayA[0]的值++运算后变成5，因++*p与++(*p)结合规则是相同的，p1也是指向arrayA[0]地址，
//    所以++*p1后arrayA[0]的值变成6。
//    */
//}
//
//
//int main()
//{
//    int arrayA[4] = { 4, 3, 2, 1 };
//    int* p1 = NULL, * p2 = NULL;
//    p1 = arrayA, p2 = arrayA;
//    printf("*(++p1)=%d *++p2=%d *p1=%d *p2=%d\n", *(++p1), *++p2, *p1, *p2);
//    return 0;
//    /*
//    打印结果：*(++p1)=3 *++p2=3 *p1=3 *p2=3
//    分析：*(++p1)表示p1先自增1后在取值，p1和p2的实际指向内存空间的位置不变。
//    */
//}
//
//
//int main(int argc, char* argv[])
//{
//    int arrayA[4] = { 4, 3, 2, 1 };
//    int* p1 = NULL, * p2 = NULL;
//    p1 = arrayA, p2 = arrayA;
//    printf("第一次：*(p1++)=%d *p2++=%d\n", *(p1++), *p2++);
//    printf("第二次：*(p1++)=%d *p2++=%d\n", *(p1++), *p2++);
//    return 0;
//    /*
//    打印结果：
//    第一次：*(p1++)=4 *p2++=4
//    第二次：*(p1++)=3 *p2++=3
//    分析：后缀运算符++优先级高，第一次执行*p1++时，p1++表示先取值后p1再自增，p1取到的值和*结合
//    取出p1指向地址的值，即arrayA首地址的值，即4。第二次执行时p1自增后指向arrayA[1]的地址，所以取值为3
//    */
//}
//
//
////int main()
////{
////	int* p = NULL;
////	*p = 0;
////	return 0;
////}
//
////int main()
////{
////	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	int* p = &a;
////	int i = 0;
////	int sz = sizeof(a) / sizeof(a[0]);
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d\n", *p);
////		//printf("%d\n", *p+1);  //可以写成这个形式，去掉下一行代码
////		p = p + 1;  //写成指针+整数
////	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d \n", *p);
//	//		*p++ = 2;
//	//}
//	//return 0;
////}
//
////#include <stdio.h>
////
////void main()
////{
////	int x = 3;
////	int* p = NULL, * q = NULL;
////	p = &x, q = &x;
////	printf("%d\n", *p++);  //*p++:是先取出*p的值，再使p加1。输出3
////	printf("%d\n", ++(*p));
////	//p是个指针，给p后置加1，先打印*p，再让p指向了x所在地址的下一个位置，而对于x则是没有任何影响
////	printf("%d\n", (*q)++);  //(*p)++：先打印*p，然后*p++，即*p的值+1，x值+1。输出3
////	printf("%d\n", ++(*q));  //++(*q)：先*p++，即*p的值+1，x值+1，然后打印*p。输出5
////	printf("%d\n", x);  //x == *p == 5
////}
//
//#include <stdio.h>
//
//int main(int argc, char* argv[])
//{
//    int arrayA[4] = { 4, 3, 2, 1 };
//    int* p1 = NULL, * p2 = NULL;
//   ///* 1: *(p++)与*p++相同:
//    p1 = arrayA, p2 = arrayA;
//    printf("第一次：*(p1++)=%d *p2++=%d\n", *(p1++), *p2++);  //
//    printf("第二次：*(p1++)=%d *p2++=%d\n", *(p1++), *p2++);  //
//    /*
//    打印结果：第一次：*(p1++)=4 *p2++=4。第二次：*(p1++)=3 *p2++=3
//    分析：后缀运算符++优先级高，第一次执行*p1++时，p1++表示先取值后p1再自增，p1取到的值和*结合
//    取出p1指向地址的值，即arrayA首地址的值，即4。第二次执行时p1自增后指向arrayA[1]的地址，所以取值为3
//    */
//
//    //* 2: *(++p)与*++p相同:
//    p1 = arrayA, p2 = arrayA;
//    printf("*(++p1)=%d *++p2=%d *p1=%d *p2=%d\n", *(++p1), *++p2, *p1, *p2);  //*(++p1)=3 *++p2=3 *p1=4 *p2=4
//    /*
//    打印结果：*(++p1)=3 *++p2=3 *p1=4 *p2=4
//    分析：*(++p1)表示p1先自增1后在取值，p1和p2的实际指向内存空间的位置不变。
//    */
// 
//    //* 3: ++*p与++(*p)相同：注意，printf函数打印自右向左
//    p1 = arrayA, p2 = arrayA;
//    printf("arrayA[0]=%d ++*p1=%d ++(*p2)=%d *p1=%d *p2=%d\n", arrayA[0], ++ * p1, ++(*p2), *p1, *p2);
//    /*打印结果：
//    arrayA[0]=6 ++*p1=6 ++(*p2)=5 *p1=4 *p2=4
//    分析：printf函数打印自右向左，首先执行++(*p2)，先对p2指向地址的值进行++运算，即将
//    arrayA[0]的值++运算后变成5，因++*p与++(*p)结合规则是相同的，p1也是指向arrayA[0]地址，
//    所以++*p1后arrayA[0]的值变成6。
//    */
//
//    /* 4: (*p)++ */
//    p1 = arrayA;
//    printf("arrayA[0]=%d, (*p1)++=%d (*p1)++=%d *p1=%d\n", arrayA[0], (*p1)++, (*p1)++, *p1);
//    /*打印结果：
//    arrayA[0]=8, (*p1)++=7 (*p1)++=6 *p1=6
//    分析：printf函数打印自右向左，(*p1)++先取出p1指向地址的值打印，然后再将p1指向地址的值++运算。
//    */
//
//    /* 5: ++复杂用法
//        ++(*p)++:  不合法：自增操作数必须是左值
//        ++(*++p++):不合法：自增操作数必须是左值
//        ++(++*p++):
//        ++(*p++):
//        (++*p++):
//    */
//    p1 = &arrayA[1];
//    printf("前：arrayA[1]=%d arrayA[2]=%d\n", arrayA[1], arrayA[2]);
//    printf("++(*p1++)=%d ++*p1++=%d *p1=%d\n", ++(*p1++), ++ * p1++, *p1);
//    printf("后：arrayA[1]=%d arrayA[2]=%d\n", arrayA[1], arrayA[2]);
//    /*打印结果：
//    前：arrayA[1]=3 arrayA[2]=2
//    ++(*p1++)=3 ++*p1++=4 *p1=3
//    后：arrayA[1]=4 arrayA[2]=3
//    分析：先执行++*p1++：后缀运算符的优先级高于前缀运算符，所以p1++先结合，返回p1指向的地址和*
//    结合后再和前面的++结合将该地址的值自增运算，即将arrayA[1]中的数由3变为4，执行完后p1指向&arrayA[2]
//    再执行++(*p1++):()的优先级最高，先执行(*p1++),因()中后缀运算符++的优先级高于*，
//    p1++先结合，先取值后自增，(*p1++)先取arrayA[2]地址中的值为2，在和前面的++结合将
//    该地址的自增运算后变为3.
//    */
//
//    return 0;
//}
//
//
//#define N_VALUS 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &valus[0]; vp < &valus[N_VALUS];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}
//
//
//指针 - 指针
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n", &arr[9] - &arr[0]);  //两个地址相减即是指针减指针,得到的结果是两个地址之间的元素个数
//	return 0;
//}


//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);  //3
//	return 0;
//}


//#define N_VALUS 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &valus[N_VALUES]; vp > &valus[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;  //arr数组可以通过指针p进行访问
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;  //指针形式操作把元素重新赋值
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);  //数组形式打印元素
//
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;  //数组形式操作把元素重新赋值
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));  //指针形式打印元素
//
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;  //pa是一级指针变量，int*是一级指针类型
//	int** ppa = &pa;  //ppa是二级指针变量，int**是二级指针类型
//	printf("%p\n", pa);
//	printf("%p\n", ppa);
//	**ppa = 20;
//	printf("%d", **ppa);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//	return 0;
//}