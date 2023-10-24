#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The chessboard array to print.
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
	for (col = 0; col < 8; col++)
	{
	putchar(a[row][col]);
	if (col < 7)
	putchar(' ');
	}
	putchar('\n');
	}
}
