#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

#include <stdlib.h>  //srand函数头文件
#include <time.h>  //time函数头文件

//初始化棋盘
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);  //传过来的棋盘是mine数组，就需要用相同类型的数组接收，不能使用board[ROW][COL]

//布雷
void SetMine(char board[ROWS][COLS], int row, int col);

//扫雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//返回座标(x,y)周围雷的数量
int get_mine_count(char mine[ROWS][COLS], int x, int y);