#include<stdio.h>

#include<stdlib.h>

#define ROW  3

#define COL  3



void play_game(int board[][COL], int type_x, int *count)

{

	int row, col;

	while (1)

	{

		printf("Player ");

		if (type_x)

			printf("X");

		else

			printf("O");

		printf(",enter your choice (row col): ");

		scanf_s("%d %d", &row, &col); // row: 1-3, col: 1-3

		row--;//°}¦C¥u±q0~2

		col--;

		if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == 0)

		{

			if (type_x)

				board[row][col] = -1; // -1 for player X

			else

				board[row][col] = 1; // 1 for player O

			*count += 1; // add 1 to number of X and O

			break;

		}

		else

			printf("Incorrect choice, try again!\n");

	}

}