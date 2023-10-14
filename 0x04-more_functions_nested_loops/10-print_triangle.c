#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size using the character '#'.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
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
for (col = 1; col <= size - row; col++)
{
_putchar(' ');
}
for (col = 1; col <= row; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
