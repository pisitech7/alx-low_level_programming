#include <stdio.h>

/**
 * main - entry point
 * description:A function that prints the n times table, starting with 0
 * return: slaways 0 to indicate successfull completion
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
