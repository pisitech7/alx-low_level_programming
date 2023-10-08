#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: A program that prints all the numbers of base 16 in lowercase
 *
 * Return: always 0 (success)
 */

int main(void)
{
int n;
char low;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (low = 'a'; low <= 'f'; low++)
{
putchar(low);
}
putchar('\n');
return (0);
}
