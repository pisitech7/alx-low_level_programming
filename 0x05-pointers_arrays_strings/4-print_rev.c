#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: A pointer to a null-terminated string to print in reverse.
 *
 * Description: This function takes a string, reverses it, and then prints
 * it to the standard output, followed by a newline character.
 */

void print_rev(char *s)
{
if (s != NULL)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}

int i;
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
}
_putchar('\n');
}
