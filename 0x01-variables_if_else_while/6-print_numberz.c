#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: A program prints all single-digit numbers of base 10 from 0
 * Return: 0 (Success)
 */

int main(void)
{
int sd;
for (sd = '0'; sd <= '9'; sd++)
{
putchar(sd);
}
putchar('\n');
return (0);
}
