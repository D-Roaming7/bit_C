#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("       1.play       \n");
	printf("       0.end       \n");
}
void print(char board[][3])
{
	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%c|", board[i][j]);
		}
		printf("\n");
		printf("------");
		printf("\n");
	}
}
void initboard(char board[][3], int row, int col)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}
	}
	print(board);
}
void yunxing(char board[][3])
{
	printf("输入要落子的坐标\n");
	int m, n;
	while (1)
	{
		scanf("%d %d", &m, &n);
		if (m <=3 && n <=3)
		{
			if (board[m - 1][n - 1] == ' ')
			{
				board[m - 1][n - 1] = '*';
				break;
			}
			else
				printf("无法落子请重新输入\n");
		}
		else
			printf("亲重新输入\n");
	}
}
void xing(char board[][3])
{
	printf("电脑下棋\n");
	int m, n;
	while (1)
	{
		m = rand() % 3;
		n = rand() % 3;
		if (board[m][n] == ' ')
		{
			board[m][n] = '#';
			break;
		}
	}
}
int judge(char board[][3])
{
	for (int i = 0; i < 3; i++)
		{
			if ('*' == board[0][i] && '*' == board[1][i] && '*' == board[2][i])
				return 1;
		}
	for (int i = 0; i < 3; i++)
		{
			if ('*' == board[i][0] && '*' == board[i][1] && '*' == board[i][2])
				return 1;
		}
	if (('*' == board[0][0] && '*' == board[1][1] && '*' == board[2][2]) || ('*' == board[0][2] && '*' == board[1][1] && '*' == board[2][0]))
			return 1;
	for (int i = 0; i < 3; i++)
	{
		if ('#' == board[0][i] && '#' == board[1][i] && '#' == board[2][i])
			return 0;
	}
	for (int i = 0; i < 3; i++)
	{
		if ('#' == board[i][0] && '#' == board[i][1] && '#' == board[i][2])
			return 0;
	}
	if (('#' == board[0][0] && '#' == board[1][1] && '#' == board[2][2]) || ('#' == board[0][2] && '#' == board[1][1] && '#' == board[2][0]))
		return 0;
	int m = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == ' ') 
			{
				m = 0;
				break;
			}
		}
	}
	if (m)
	{
		return 2;
	}
	return 3;
}
void game()
{
	char board[3][3] = { 0 };
	initboard(board, 3, 3);
	int ret;
	while (1)
	{
		yunxing(board);
		print(board);
		ret = judge(board);
		if (ret != 3)
			break;
		xing(board);
		print(board);
		ret=judge(board);
		if (ret != 3)
			break;
	}
	if (ret == 1)
	{
		printf("win!!!\n");
	}
	else if (ret == 2)
	{
		printf("平局请重新开始\n");
	}
	else if (ret == 0)
	{
		printf("try again\n");
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("start\n");
			game();
			break;
		case 0:
			printf("end\n");
			break;
		default:
			printf("try again");
			break;
		}
	} while (input);
}