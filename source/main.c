#include <stdio.h>
#include <stdlib.h>
#define ROW  3//╛ю
#define COL  3//жC

int main()
{
	int board[ROW][COL];
	int count;// number of X and O have has been placed
	int type_x = 1;// player: 1(true) = X, false = O
	init_game(board, &count); // initialize the board and count
	show_game(board);// show the play board
	while (1)
	{

		play_game(board, type_x, &count); // place one X or O
		show_game(board);
		if (check_game(board, type_x, &count))// win or tie
			break;
		if (count == ROW * COL) // board is full, exit
		{
			if (count == 9) {
				printf("ендт!!!!\n");
			}
			break;
		}
		type_x = !type_x;// swap player
	}
	system("pause");
	return 0;
}