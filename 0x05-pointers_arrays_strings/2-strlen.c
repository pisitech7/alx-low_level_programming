#include "main.h"
#include <stddef.h>

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a null-terminated string.
 *
 * Description: This function counts the number of characters in the
 * given string until it reaches the null terminator and returns that count.
 *
 * Return: The length of the string as an integer.
 */

int _strlen(char *s)
{
int length = 0;

if (s != NULL)
{
while (*s != '\0')
{
length++;
s++;
}
}
return (length);
}
