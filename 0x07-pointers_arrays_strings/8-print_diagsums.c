#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The square matrix of integers.
 * @size: The size of the matrix (number of rows or columns).
 */

void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
	diag1 += a[i * size + i];
	diag2 += a[i * size + (size - 1 - i)];
	}
	printf("Sum of diagonal 1: %d\n", diag1);
	printf("Sum of diagonal 2: %d\n", diag2);
}
