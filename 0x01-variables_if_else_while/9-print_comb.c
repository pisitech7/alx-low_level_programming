#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: A program that prints all possible numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
int x;

for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (x != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
