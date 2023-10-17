#include "main.h"
#include <stddef.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: A pointer to a null-terminated string to print.
 *
 * Description: This function takes a string and prints it to the standard
 * output, followed by a newline character.
 */

void _puts(char *str)
{
if (str != NULL)
{
while (*str)
{
_putchar(*str);
str++;
}
}
_putchar('\n');
}
