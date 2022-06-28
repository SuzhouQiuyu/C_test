#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)  //��ʼ���Ǳ�����������
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
	printf("------ɨ����Ϸ------\n");
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)  //��ӡÿ�С��ڴ�ӡʱ��Ӧ�ó�ȥ��ɫ��ͺ��֮��Ĳ��֣�����(1,1)��ʼ
	{
		printf("%d ", i);  //��ӡ�к�
		for (j = 1; j <= col; j++)  //��ӡһ���е�ÿ����Ϣ
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------ɨ����Ϸ------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;  //�����׵�������ʹ����game.h�ж���EASY_COUNT��������������Ҫ�����׵�����
	//�����׵�˼·��ÿ�β���һ����count--��ֱ��count=0��
	while (count != 0)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		//�׳��ֵķ�Χ�Ǻ���ڣ������ֵ�ķ�Χ��1-9
		//��һ������ģ9ʱ�����һ����0-8
		//rand������ʹ��֮ǰ���ú���srand��srandֻ�ܵ���һ�Σ�����test.c�е�test������
		if (board[x][y] == '0')  //Ϊ0ʱ��λ��û�в���0(������)
		{
			board[x][y] = '1';  //������
			count--;  //�׵�����-1
		}
		//��board[x][y]����ʱ��if�����жϲ����㣬countֵ���䣬���ж�while������Ѱ����һ��board[x][y]
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)  //����ĳ��������Χ8��������׵�����
{
	//˼·1��������������Χ��8�����꣬�Ƚ������������Ƿ�Ϊ����'1'���ҵ�һ����count++
	//˼·2��������0��1��ɣ����Խ���������Χ��8���ַ�ȫ����ӡ�
		//����0��1���ַ���ʽ����Ҫת��Ϊ���֡�'����'-'0'=���֡�
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
	//��win=��������������-�׵���������ʾȫ�������꣬��һ�ʤ
	while (win<row*col- EASY_COUNT)  //�������л�����Ҫ�Ų������ʱ����ѭ��
	{
		printf("�������Ų��׵����꣺>");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)  //�ж�����Ϸ���
		{
			//����Ϸ��������������������׻��߷���
			if (mine[x][y] == '1')
			{
				printf("���ź�������\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//���㣨x,y��������Χ��8���������׵�����
				int count = get_mine_count(mine,x,y);  //Ϊ��ֹ�����������ú�����ȡ�׵�����
				//��Ҫ�Ѽ����countֵ���ַ���ʽ��ӡ��show��������ʾ�����
				show[x][y] = count + '0';  //����+'0'='����'����ʾ����(x,y)���׳ɹ�
				DisplayBoard(show, row, col);
				win++;  //ÿ�Ų�һ�������win++��ֱ�������ϳ���������ȫ�����궼���Ų�
			}
		}
		else
		{
			printf("����Ƿ�������������\n");  //��Ҫѭ��
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
	}
}