#include<stdio.h>
#include<stdlib.h>
#define ROW  3
#define COL  3

void init_game(int board[][COL], int *count) {

	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			board[i][j] = 0;
	}
	*count = 0;
}