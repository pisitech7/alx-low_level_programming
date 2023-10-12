#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that calculates and prints the first 98 Fibonacci
 * numbers, starting with 1 and 2, separated by a comma and space.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
unsigned long int a = 1, b = 2, c;
int count;

printf("%lu, %lu", a, b);

for (count = 2; count < 98; count++)
{
c = a + b;
printf(", %lu", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
