#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 *
 * Description: This function takes two integer pointers and swaps the values
 * of the integers they point to.
 */

void swap_int(int *a, int *b)
{
int temp;

if (a != NULL && b != NULL)
{
temp = *a;
*a = *b;
*b = temp;
}
}
