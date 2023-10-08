#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * description: program that prints the lowercase alphabet in reverse
 *
 * return: always 0 (success)
 *
 */

int main(void)
{
char rev;
for (rev >= 'z'; rev >= 'a'; rev--)
putchar(rev);
putchar('\n');
return (0);
}
