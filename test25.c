#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 20;
//	//00000000000000000000000000010100 - 原反补
//	//补码二进制转十六进制内存地址。每四个二进制对应一个十六进制，如下：
//	//0000 0000 0000 0000 0000 0000 0001 0100
//	//0x00000014
//	int b = -10;
//	//10000000000000000000000000001010 - 原
//	//11111111111111111111111111110101 - 反
//	//11111111111111111111111111110110 - 补
//	//补码二进制转十六进制内存地址。每四个二进制对应一个十六进制，如下：
//	//1111 1111 1111 1111 1111 1111 1111 0110
//	//0xfffffff6
//	return 0;
//}	


//int main()
//{	
//	//计算机中只有加法器，1-1可以转换为1+(-1)
//	int a = 1;
//	//00000000000000000000000000000001 - 原
//	int b = -1;
//	//10000000000000000000000000000001 - 原
//	//11111111111111111111111111111110 - 原码相加
//	//当补码没有出现时候，原码相加得到的值是-2，计算结果错误。
//	//00000000000000000000000000000001 - 补
//	//11111111111111111111111111111111 - 补
//	//100000000000000000000000000000000 - 补码相加
//	//补码相加后的结果存储在内存中时，int类型是4字节32比特，发生截断，取后32位如下：
//	//00000000000000000000000000000000 - 0
//	return 0;
//}

int main()
{
	int a = 0x44332211;
	return 0;
}	