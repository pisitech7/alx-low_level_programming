#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int spaces = 0;
int i;

while (n > 0)
{
for (i = 0; i < spaces; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
spaces++;
n--;
}
}
}
