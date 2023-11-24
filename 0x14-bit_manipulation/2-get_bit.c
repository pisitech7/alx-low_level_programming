#include <stdio.h>
#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: Unsigned long int number
 * @index: Index of the bit to get
 * Return: Value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
