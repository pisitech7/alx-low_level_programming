#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring in haystack,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
	char *hay_ptr = haystack;
	char *needle_ptr = needle;

	while (*needle_ptr && (*hay_ptr == *needle_ptr))
	{
	hay_ptr++;
	needle_ptr++;
	}

	if (*needle_ptr == '\0')
	return (haystack);
	haystack++;
	}
	return (NULL);
}
