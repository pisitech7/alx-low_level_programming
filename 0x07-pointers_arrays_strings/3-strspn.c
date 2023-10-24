#include <stdio.h>
#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s consisting
 * only of bytes that appear in accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int matched;
	unsigned int i;

	while (*s)
	{
	matched = 0;
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
		{
		matched = 1;
		break;
		}
	}
	if (!matched)
	break;
	count++;
	s++;
	}
	return (count);
}
