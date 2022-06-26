#define ROW 3  //��
#define COL 3  //��
//��ͷ�ļ��ж����к��У��պ���չʹ�ÿ���ֱ�Ӹ���ͷ�ļ��е�ROW��COL��ֵ

#include <stdio.h>  //game.c�ļ���DisplayBoard������ʹ����printf�ĺ�������Ҫ����stdio.h��ͷ�ļ�
#include <stdlib.h>  //test.c�ļ���test������ʹ����srand()��������Ҫ����stdlib.h��ͷ�ļ�
#include <time.h>  //test.c�ļ���test������ʹ����time()��������Ҫ����time.h��ͷ�ļ�

void InitBoard(char board[ROW][COL], int row, int col);  //����InitBoard������
void DisplayBoard(char board[ROW][COL], int row, int col);  //����DisplayBoard������
void PlayerMove(char board[ROW][COL], int row, int col);  //����PlayerMove������
void ComputerMove(char board[ROW][COL], int row, int col);  //����ComputerMove������

//IsWin()����Ӧ�÷�������������Ϸ״̬��
//1.���Ӯ   ���ء�*��
//2.����Ӯ   ���ء�#��
//3.ƽ��     ���ء�Q��
//4.����     ���ء�A��
char IsWin(char board[ROW][COL], int row, int col);  