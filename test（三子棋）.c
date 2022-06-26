#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"  //第14行使用了game.h中的符号，需要包含这个头文件

void menu()
{
	printf("**********************\n");
	printf("****1.paly  0.exit****\n");
	printf("**********************\n");
}

//游戏算法实现
void game()  
{
	char ret = 0;  //设置变量ret接收IsWin函数的返回值
	char board[ROW][COL] = {0}; //设置一个数组board,记录棋盘中每一步棋的位置
	//没有棋子时棋盘中应该是空白的，有棋子时才会打印一个字符。空白的棋盘实际也会打印内容（在打印棋盘时就已经打印了数组元素）。
	//为了视觉上看到棋盘是空白的，最好每个元素在起始时都是空格，即需要初始化数组。
	InitBoard(board,ROW,COL);  //初始化棋盘.属于游戏的相关代码，在game.h中声明，在game.c中实现
	DisplayBoard(board,ROW,COL);  //打印棋盘(数组)
	while (1)  //开始下棋直到有一方获胜，使用break跳出
	{
		PlayerMove(board,ROW,COL);  //玩家先手下棋，下棋的位置是棋盘坐标，即对数组board进行操作，需要行列数据
		DisplayBoard(board, ROW, COL);
		//判断输赢是判断行、列、对角是否3个符号相同，即对数组board进行判断，需要行列数据
		ret = IsWin(board, ROW, COL);  //在玩家每走一步棋后判断输赢
		if (ret != 'A')  //不要继续（分出输赢或平局）
		{
			break;
		}
		ComputerMove(board, ROW, COL);  //电脑下棋，和玩家一样，下棋的位置是棋盘坐标，即对数组board进行操作，需要行列数据
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);  //在电脑每走一步棋后判断输赢
		if (ret != 'A')  //不要继续（分出输赢或平局）
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int input = 0;
	//srand()设置随机数生成器时使用时间戳time()，参数为空指针，返回类型由time_t强制转换为int
	srand((unsigned int)time(NULL));  //使用srand()和time()需要引用头文件
	do
	{
		menu();   //进入游戏后显示菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
	//走到default时要重新执行do-while循环重新输入，即while要为真。
	//只有当case为0时，break跳出循环到while语句，input=0，判断为假需要退出。
	//综合考虑判断条件应为input，非0时为真，进入循环。
}

int main()
{
	test();  //希望游戏可以重复玩
	return 0;
}