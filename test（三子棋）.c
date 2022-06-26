#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"  //��14��ʹ����game.h�еķ��ţ���Ҫ�������ͷ�ļ�

void menu()
{
	printf("**********************\n");
	printf("****1.paly  0.exit****\n");
	printf("**********************\n");
}

//��Ϸ�㷨ʵ��
void game()  
{
	char ret = 0;  //���ñ���ret����IsWin�����ķ���ֵ
	char board[ROW][COL] = {0}; //����һ������board,��¼������ÿһ�����λ��
	//û������ʱ������Ӧ���ǿհ׵ģ�������ʱ�Ż��ӡһ���ַ����հ׵�����ʵ��Ҳ���ӡ���ݣ��ڴ�ӡ����ʱ���Ѿ���ӡ������Ԫ�أ���
	//Ϊ���Ӿ��Ͽ��������ǿհ׵ģ����ÿ��Ԫ������ʼʱ���ǿո񣬼���Ҫ��ʼ�����顣
	InitBoard(board,ROW,COL);  //��ʼ������.������Ϸ����ش��룬��game.h����������game.c��ʵ��
	DisplayBoard(board,ROW,COL);  //��ӡ����(����)
	while (1)  //��ʼ����ֱ����һ����ʤ��ʹ��break����
	{
		PlayerMove(board,ROW,COL);  //����������壬�����λ�����������꣬��������board���в�������Ҫ��������
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ���ж��С��С��Խ��Ƿ�3��������ͬ����������board�����жϣ���Ҫ��������
		ret = IsWin(board, ROW, COL);  //�����ÿ��һ������ж���Ӯ
		if (ret != 'A')  //��Ҫ�������ֳ���Ӯ��ƽ�֣�
		{
			break;
		}
		ComputerMove(board, ROW, COL);  //�������壬�����һ���������λ�����������꣬��������board���в�������Ҫ��������
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);  //�ڵ���ÿ��һ������ж���Ӯ
		if (ret != 'A')  //��Ҫ�������ֳ���Ӯ��ƽ�֣�
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int input = 0;
	//srand()���������������ʱʹ��ʱ���time()������Ϊ��ָ�룬����������time_tǿ��ת��Ϊint
	srand((unsigned int)time(NULL));  //ʹ��srand()��time()��Ҫ����ͷ�ļ�
	do
	{
		menu();   //������Ϸ����ʾ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	//�ߵ�defaultʱҪ����ִ��do-whileѭ���������룬��whileҪΪ�档
	//ֻ�е�caseΪ0ʱ��break����ѭ����while��䣬input=0���ж�Ϊ����Ҫ�˳���
	//�ۺϿ����ж�����ӦΪinput����0ʱΪ�棬����ѭ����
}

int main()
{
	test();  //ϣ����Ϸ�����ظ���
	return 0;
}