#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"  //��4�д���ʹ����game.h�еķ��ţ���Ҫ�������ͷ�ļ�

//����InitBoard��ʵ�֣�����Ԫ�س�ʼ���ɿո�
void InitBoard(char board[ROW][COL], int row, int col)  
{
	int i = 0;
	int j = 0;
	//����forѭ����������
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)  
		{
			board[i][j] = ' ';
		}
	}
}

//����DisplayBoard��ʵ��
void DisplayBoard(char board[ROW][COL], int row, int col)  
//��ӡ�������ݣ�
//   |   |
//---|---|---
//   |   |   
//---|---|---
//   |   |   
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ3������ʱ���������£�
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);  //��ӡһ������
		//if(i < row-1) 	//��ӡ�ָ���(���������һ��)
		//{
		//	printf("---|---|---\n");
		//}
		//ʹ�����̿��԰���game.h�й涨���к��д�ӡ����ʱ���������£�
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//��ӡһ������
			printf(" %c ", board[i][j]);
			//��ӡһ�������еķָ���(���������һ��)
			if (j < col - 1)
			{
				printf("|");  //��ÿһ�����ݺ���ϡ�|�������һ�г��⣩
			}
		}
		printf("\n");
		//��ӡ�ָ���(���������һ��)
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");  //��ÿһ�����ݺ���ϡ�|�������һ�г��⣩
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;  //�洢������������
	printf("�����>\n");
	while (1)
	{
		printf("����������:>");
		scanf("%d %d", &x, &y);
		//�ж��û���������Ϸ���
		if (x > 0 && x <= row && y > 0 && y <= col)  //������ͨ��˼·��3*3�ķ������������Ǵ�1��3�ģ������Ǵ�0��ʼ
		{
			//����������Ϸ�ʱ���������������Ƿ��Ѿ�����Ԫ��
			if (board[x - 1][y - 1] == ' ')  //������Ϊ�ո񣬱�ʾδ��ռ��
			{
				board[x-1][y-1] = '*';  //Ϊ�����긳ֵ�Ǻ�
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ��\n");  //ִ��else��ʵ����whileѭ���ı���ѭ���Ѿ�����������ִ��whileѭ��
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");  //Ҫ���������룬����Ҫѭ��
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;  //�洢�������������
	printf("������>\n");
	while (1)
	{
		//rand()�������������Χ��0-RAND_MAX
		//ʹ��rand()��Ҫ����srand()��srandֻ�ܵ���һ�Σ�������ֻ����һ�ε�test.c�е�test������
		x = rand() % row;  //rand()�������ֵģ�С��е�ֵ�����0-2��ֵ������3*3�������в����ڷǷ�����
		y = rand() % col;
		if (board[x][y] == ' ')  //������Ϊ�ո񣬱�ʾδ��ռ��
		{
			board[x][y] = '#';  //Ϊ�����긳ֵ����
			break;
		}
		//else  ���Բ���Ҫ��ʾ�������ѱ�ռ�ã����������겻�Ϸ������걻ռ�ã�ʱ������ִ��whileѭ��ֱ���ҵ��Ϸ������break����
		//	...
	}
}

int IsFull(char board[ROW][COL], int row, int col)  //����1��ʾ����ȫ��������0��ʾ�������п�λ
{
	//��������Ѱ���Ƿ��пո�
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;  //����δ��
			}
		}
	}
	return 1;  //��������
}


char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�жϺ������Ƿ���ͬ
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];  //���Ӯ�͵���Ӯ�ֱ𷵻ء�*���͡�#����������Լ���������ķ�����ͬ�������Է��������ϵ��ַ�
		}
	}
	//�ж��������Ƿ���ͬ
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж������Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж��Ƿ�ƽ�֣�û����Ӯ��������û�п�λ��
	if(1 == IsFull(board, row, col))  //������������ȫ��ʱ����1
	{
		return 'Q';
	}
	return 'A';
}