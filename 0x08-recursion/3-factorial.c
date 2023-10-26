#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number to return the factorial from.
 * Return: return factorial of n is -1 or 1
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
