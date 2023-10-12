#include <stdio.h>

/**
 * main - Entry point
 *
 * description: A program  computes and prints the sum of  multiples of 3 or 5 below 1024
 *
 * return: Alaways 0 to indicate successfull completion
 */

int main(void)
{
int sum = 0;
int i;

for (i = 3; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
