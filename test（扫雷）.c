#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("*****    1. play    *****\n");
	printf("*****    0. exit    *****\n");
	printf("*************************\n");
}

void game()
{
	//布置雷的位置信息
	char mine[ROWS][COLS] = { 0 };  //数组mine中存放布置好的雷的信息
	//排查出的雷的信息
	char show[ROWS][COLS] = { 0 };  //数组show中存放排查出的雷的信息
	//初始化函数
	InitBoard(mine, ROWS, COLS,'0');  //初始化为0，把0传过去
	InitBoard(show, ROWS, COLS,'*');  //初始化为*，把*传过去
	//在初始化函数时，board[i][j]的值只能赋给一个值，需要在传参时候分别将要初始化的内容也传过去。
	
	//打印棋盘
	//DisplayBoard(mine,ROW,COL);  //打印棋盘的网格时，只需要打印红框内的位置
	DisplayBoard(show, ROW,COL);  //数组传参时数组show要完整传过去[ROWS][COLS]，后面的参数按照实际操作
	//布雷
	SetMine(mine, ROW, COL);  //在数组mine中随机找一些坐标放上字符1
	//DisplayBoard(mine, ROW, COL);  //布雷结束后再次打印棋盘
	 
	//(数组mine的打印函数只在调试代码时候调用，在游戏中不打印)
	
	//扫雷
	FindMine(mine,show,ROW,COL);  //排雷的过程是在mine数组中查找信息放进show数组中
}

void test()
{
	srand((unsigned int)time(NULL));  //调用srand，time函数的返回值生成时间戳来设置srand
	int input = 0; 
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)  //根据输入值选择相应的输出内容
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);  //判断条件的要求：可以多次运行游戏
	//当input为1时，条件为真，进入do-while循环；当input为0时，条件为假，离开do-while循环；input输入其他内容时，非0为真，进入do-while循环。
}

int main()
{
	test();
	return 0;
}