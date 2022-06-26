#define ROW 3  //行
#define COL 3  //列
//在头文件中定义行和列，日后扩展使用可以直接更改头文件中的ROW和COL的值

#include <stdio.h>  //game.c文件中DisplayBoard函数内使用了printf的函数，需要包含stdio.h的头文件
#include <stdlib.h>  //test.c文件中test函数内使用了srand()函数，需要包含stdlib.h的头文件
#include <time.h>  //test.c文件中test函数内使用了time()函数，需要包含time.h的头文件

void InitBoard(char board[ROW][COL], int row, int col);  //函数InitBoard的声明
void DisplayBoard(char board[ROW][COL], int row, int col);  //函数DisplayBoard的声明
void PlayerMove(char board[ROW][COL], int row, int col);  //函数PlayerMove的声明
void ComputerMove(char board[ROW][COL], int row, int col);  //函数ComputerMove的声明

//IsWin()函数应该返回如下四种游戏状态：
//1.玩家赢   返回“*”
//2.电脑赢   返回“#”
//3.平局     返回“Q”
//4.继续     返回“A”
char IsWin(char board[ROW][COL], int row, int col);  