#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"  //第4行代码使用了game.h中的符号，需要包含这个头文件

//函数InitBoard的实现（数组元素初始化成空格）
void InitBoard(char board[ROW][COL], int row, int col)  
{
	int i = 0;
	int j = 0;
	//两层for循环遍历数组
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)  
		{
			board[i][j] = ' ';
		}
	}
}

//函数DisplayBoard的实现
void DisplayBoard(char board[ROW][COL], int row, int col)  
//打印如下内容：
//   |   |
//---|---|---
//   |   |   
//---|---|---
//   |   |   
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印3行棋盘时，代码如下：
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);  //打印一行棋盘
		//if(i < row-1) 	//打印分割行(不包括最后一行)
		//{
		//	printf("---|---|---\n");
		//}
		//使得棋盘可以按照game.h中规定的行和列打印棋盘时，代码如下：
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//打印一行棋盘
			printf(" %c ", board[i][j]);
			//打印一行棋盘中的分隔线(不包括最后一个)
			if (j < col - 1)
			{
				printf("|");  //在每一列数据后加上“|”（最后一列除外）
			}
		}
		printf("\n");
		//打印分割行(不包括最后一行)
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");  //在每一列数据后加上“|”（最后一列除外）
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;  //存储玩家输入的坐标
	printf("玩家走>\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		//判断用户输入坐标合法性
		if (x > 0 && x <= row && y > 0 && y <= col)  //按照普通人思路，3*3的方格行列排序是从1到3的，而不是从0开始
		{
			//当输入坐标合法时，继续检查该坐标是否已经存在元素
			if (board[x - 1][y - 1] == ' ')  //该坐标为空格，表示未被占用
			{
				board[x-1][y-1] = '*';  //为该坐标赋值星号
				break;
			}
			else
			{
				printf("该位置已被占用\n");  //执行else后实际上while循环的本次循环已经结束，重新执行while循环
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");  //要求重新输入，就需要循环
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;  //存储电脑输入的坐标
	printf("电脑走>\n");
	while (1)
	{
		//rand()生成随机数，范围：0-RAND_MAX
		//使用rand()需要调用srand()，srand只能调用一次，设置在只调用一次的test.c中的test函数中
		x = rand() % row;  //rand()产生随机值模行、列的值后产生0-2的值，即在3*3的棋盘中不存在非法问题
		y = rand() % col;
		if (board[x][y] == ' ')  //该坐标为空格，表示未被占用
		{
			board[x][y] = '#';  //为该坐标赋值井号
			break;
		}
		//else  电脑不需要提示该坐标已被占用，当生成坐标不合法（坐标被占用）时，重新执行while循环直到找到合法坐标后break跳出
		//	...
	}
}

int IsFull(char board[ROW][COL], int row, int col)  //返回1表示棋盘全满，返回0表示棋盘上有空位
{
	//遍历棋盘寻找是否有空格
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;  //棋盘未满
			}
		}
	}
	return 1;  //棋盘已满
}


char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断横三行是否相同
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];  //玩家赢和电脑赢分别返回“*”和“#”，和玩家以及电脑下棋的符号相同，即可以返回棋盘上的字符
		}
	}
	//判断竖三列是否相同
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断是否平局（没有人赢且棋盘上没有空位）
	if(1 == IsFull(board, row, col))  //函数设置棋盘全满时返回1
	{
		return 'Q';
	}
	return 'A';
}