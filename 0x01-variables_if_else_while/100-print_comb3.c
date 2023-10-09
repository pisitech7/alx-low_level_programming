#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: A program that prints possible combinations of two digits
 *
 * Return: always 0 (success)
 */

int main(void)
{
int a, b;
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
if (a != b)
{
putchar(a);
putchar(b);
if (a == '8' && b == '9')
{
putchar('\n');
}
else
{
putchar('.');
putchar(' ');
}
}
}
}    
return (0);
}
