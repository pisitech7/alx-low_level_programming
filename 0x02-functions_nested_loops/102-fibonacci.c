#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the first 50 Fibonacci numbers.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
long int a = 1, b = 2, c, i;

printf("%ld, %ld", a, b);

for (i = 3; i <= 50; i++)
{
c = a + b;
printf(", %ld", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
