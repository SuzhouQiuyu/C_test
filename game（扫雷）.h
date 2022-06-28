#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

#include <stdlib.h>  //srand����ͷ�ļ�
#include <time.h>  //time����ͷ�ļ�

//��ʼ������
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);  //��������������mine���飬����Ҫ����ͬ���͵�������գ�����ʹ��board[ROW][COL]

//����
void SetMine(char board[ROWS][COLS], int row, int col);

//ɨ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

//��������(x,y)��Χ�׵�����
int get_mine_count(char mine[ROWS][COLS], int x, int y);