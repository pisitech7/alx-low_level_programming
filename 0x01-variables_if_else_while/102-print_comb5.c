#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints combinations of numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x, y;
for (x = 0; x <= 99; x++)
{
for (y = x + 1; y <= 99; y++)
{
putchar((x / 10) + '0');
putchar((x % 10) + '0');
putchar(' ');
putchar((y / 10) + '0');
putchar((y % 10) + '0');
if (!(x == 98 && y == 99))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
