#include <stdio.h>
#include <math.h>

/**
 * main - Entry point.
 *
 * A program that finds and prints the largest prime factor of 612852475143.
 *
 * Return: Always 0 to indicate successful completion.
 */

int main(void)
{
long number = 612852475143;
long largest_prime = -1;
long i;

while (number % 2 == 0)
{
largest_prime = 2;
number /= 2;
}
for (i = 3; i <= sqrt(number); i += 2)
{
while (number % i == 0)
{
largest_prime = i;
number /= i;
}
}
if (number > 2)
{
largest_prime = number;
}
printf("%ld\n", largest_prime);
return (0);
}
