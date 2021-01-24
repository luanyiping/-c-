#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j <= col - 1)
				printf("|");
		}
		printf("\n");
		if (i <= row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j <= col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("玩家走:\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] != ' ')
			{
				printf("坐标被占用，请重新输入!\n");
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("坐标非法，请重新输入!\n");
		}
	}
}
void ComputerMove(char board[ROW][COL],int row,int col)
{
	printf("电脑走:\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int isFull(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char CheckWin(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		int count = 0;
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] != ' ')
			{
				count++;
			}
		}
		if (count == col - 1)
			return board[i][j];
	}
	for (i = 0; i < col; i++)
	{
		int count = 0;
		for (j = 0; j < row - 1; j++)
		{
			if (board[j][i] == board[j + 1][i] && board[j][i] != ' ')
			{
				count++;
			}
		}
		if (count == row - 1)
			return board[j][i];
	}
	int count1 = 0, count2 = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && board[i][j] != ' ')
				count1++;
			else if (i + j == row && board[i][j] != ' ')
			{
				count2++;
			}
		}
	}
	if (count1 == row)
		return board[0][0];
	if (count2 == row)
		return board[0][col - 1];
	if (isFull(board, row, col) == 1)
	{
		return 'Q';
	}
	return 'C';

}
