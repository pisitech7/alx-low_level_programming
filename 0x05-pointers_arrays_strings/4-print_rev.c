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
int c = 0;

while (s[c] != '\0')
{
c++;
}
for (c -= 1; c >= 0; c--)
{
_putchar(s[c]);
}
}
_putchar('\n');
}
