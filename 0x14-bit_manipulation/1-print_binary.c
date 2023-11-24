#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Unsigned long int number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(unsigned long int) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	while (i >= 0)
	{
	if ((n >> i) & 1)
		break;
	i--;
	}
	for (; i >= 0; i--)
	{
		((n >> i) & 1) ? putchar('1') : putchar('0');
	}
}
