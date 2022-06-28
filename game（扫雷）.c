#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)  //初始化是遍历整个数组
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------扫雷游戏------\n");
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)  //打印每行。在打印时候应该除去蓝色框和红框之间的部分，即从(1,1)开始
	{
		printf("%d ", i);  //打印行号
		for (j = 1; j <= col; j++)  //打印一行中的每个信息
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------扫雷游戏------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;  //定义雷的数量，使用在game.h中定义EASY_COUNT，方便后面根据需要更改雷的数量
	//布置雷的思路：每次布置一个，count--，直到count=0。
	while (count != 0)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//雷出现的范围是红框内，即随机值的范围是1-9
		//当一个数字模9时，结果一定是0-8
		//rand函数在使用之前调用函数srand，srand只能调用一次，放在test.c中的test函数中
		if (board[x][y] == '0')  //为0时该位置没有布置0(不是雷)
		{
			board[x][y] = '1';  //布置雷
			count--;  //雷的数量-1
		}
		//当board[x][y]有雷时，if条件判断不满足，count值不变，再判断while条件，寻找下一个board[x][y]
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)  //计算某个坐标周围8个坐标的雷的数量
{
	//思路1：遍历该坐标周围的8个坐标，比较坐标中内容是否为参数'1'，找到一个，count++
	//思路2：棋盘由0和1组成，可以将该坐标周围的8个字符全部相加。
		//由于0和1是字符形式，需要转换为数字。'数字'-'0'=数字。
		return mine[x - 1][y] + 
		mine[x - 1][y - 1] +
		mine[x][y - 1] + 
		mine[x + 1][y - 1] +
		mine[x + 1][y] + 
		mine[x + 1][y + 1] + 
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//当win=棋盘上坐标总数-雷的数量，表示全部雷排完，玩家获胜
	while (win<row*col- EASY_COUNT)  //当棋盘中还有需要排查的坐标时继续循环
	{
		printf("请输入排查雷的坐标：>");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)  //判断坐标合法性
		{
			//坐标合法后可以有两种情况，是雷或者非雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，踩雷\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//计算（x,y）坐标周围的8个坐标中雷的数量
				int count = get_mine_count(mine,x,y);  //为防止函数过大，设置函数获取雷的数量
				//需要把计算的count值用字符形式打印到show数组重显示给玩家
				show[x][y] = count + '0';  //数字+'0'='数字'。表示坐标(x,y)排雷成功
				DisplayBoard(show, row, col);
				win++;  //每排查一个坐标后，win++，直到棋盘上除了雷以外全部坐标都被排查
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");  //需要循环
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
	}
}