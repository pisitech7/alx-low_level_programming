#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (included).
 * @max: The maximum value (included).
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
