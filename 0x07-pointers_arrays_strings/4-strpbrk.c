#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
	char *ptr = accept;

	while (*ptr)
	{
	if (*s == *ptr)
	return (s);
	ptr++;
	}
	s++;
	}
	return (NULL);
}
