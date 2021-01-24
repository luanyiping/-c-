#pragma once
#define ROW 5
#define COL 5
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char CheckWin(char board[ROW][COL], int row, int col);