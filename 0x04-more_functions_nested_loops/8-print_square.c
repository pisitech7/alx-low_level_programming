#include "main.h"

/**
 * print_square - Prints a square of a given size using the character '#'.
 * @size: The size of the square.
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int row, col;

for (row = 1; row <= size; row++)
{
for (col = 1; col <= size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
