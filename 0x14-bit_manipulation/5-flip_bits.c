#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from n to m
 * @n: Unsigned long int number n
 * @m: Unsigned long int number m
 * Return: Number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
