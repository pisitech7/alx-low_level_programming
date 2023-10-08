#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: program that prints the lowercase alphabet in reverse
 *
 * Return: always 0 (success)
 */

int main(void)
{
char rev;
for (rev = 'z'; rev >= 'a'; rev--)
{
putchar(rev);
}

putchar('\n');
return (0);
}
