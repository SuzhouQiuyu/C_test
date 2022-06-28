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
	//�����׵�λ����Ϣ
	char mine[ROWS][COLS] = { 0 };  //����mine�д�Ų��úõ��׵���Ϣ
	//�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };  //����show�д���Ų�����׵���Ϣ
	//��ʼ������
	InitBoard(mine, ROWS, COLS,'0');  //��ʼ��Ϊ0����0����ȥ
	InitBoard(show, ROWS, COLS,'*');  //��ʼ��Ϊ*����*����ȥ
	//�ڳ�ʼ������ʱ��board[i][j]��ֵֻ�ܸ���һ��ֵ����Ҫ�ڴ���ʱ��ֱ�Ҫ��ʼ��������Ҳ����ȥ��
	
	//��ӡ����
	//DisplayBoard(mine,ROW,COL);  //��ӡ���̵�����ʱ��ֻ��Ҫ��ӡ����ڵ�λ��
	DisplayBoard(show, ROW,COL);  //���鴫��ʱ����showҪ��������ȥ[ROWS][COLS]������Ĳ�������ʵ�ʲ���
	//����
	SetMine(mine, ROW, COL);  //������mine�������һЩ��������ַ�1
	//DisplayBoard(mine, ROW, COL);  //���׽������ٴδ�ӡ����
	 
	//(����mine�Ĵ�ӡ����ֻ�ڵ��Դ���ʱ����ã�����Ϸ�в���ӡ)
	
	//ɨ��
	FindMine(mine,show,ROW,COL);  //���׵Ĺ�������mine�����в�����Ϣ�Ž�show������
}

void test()
{
	srand((unsigned int)time(NULL));  //����srand��time�����ķ���ֵ����ʱ���������srand
	int input = 0; 
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)  //��������ֵѡ����Ӧ���������
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);  //�ж�������Ҫ�󣺿��Զ��������Ϸ
	//��inputΪ1ʱ������Ϊ�棬����do-whileѭ������inputΪ0ʱ������Ϊ�٣��뿪do-whileѭ����input������������ʱ����0Ϊ�棬����do-whileѭ����
}

int main()
{
	test();
	return 0;
}