#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"



void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}



void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 1; i <= row; i++)
	{
		printf("  %d", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("%d", i);
		for (j = 1; j <= col; j++)
		{
			
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
}



void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count > 0)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


void expand(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int* win,char n)
{
	if (n == '0')
	{	
		show[x][y] = ' ';
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (i > 0 && i <= row && j > 0 && j <= col && show[i][j] == '*')
				{
					expand(mine, show, row, col, i, j, win, get_mine_count(mine, i, j) + '0');
				}
			}
		}
		
	}
	else
	{
		show[x][y] = n;
	}
	*win = *win + 1;
}





int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}










void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < ROW * COL - EASY_COUNT)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				expand(mine, show, row, col, x, y, &win, count + '0');
				/*show[x][y] = count + '0';*/
				system("cls");
				DisplayBoard(show, row, col);
				/*win++;*/
			}
		}
		else
		{
			printf("输入的坐标非法，请重新输入!");
		}
	}
	if (win == ROW * COL - EASY_COUNT)
	{
		printf("恭喜你，排雷成功!\n");
		DisplayBoard(mine, row, col);
	}
}