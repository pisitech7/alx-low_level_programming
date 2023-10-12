#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that finds and prints the sum of even-valued terms in
 * the Fibonacci sequence not exceeding 4,000,000.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
long int a = 1, b = 2, c, sum = 0;

while (b <= 4000000)
{
if (b % 2 == 0)
{
sum += b;
}
c = a + b;
a = b;
b = c;
}
printf("%ld\n", sum);
return (0);
}
