#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: A pointer to an array of integers.
 * @n: The number of elements to print.
 *
 * This function takes an array of integers and the number of elements
 * to print from the beginning of the array.Are displayed in the same order
 * as they are stored in the array, separated by a comma and space.
 */

void print_array(int *a, int n)
{
int i;
if (a != NULL)
{i
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
}
