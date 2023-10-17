#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: A pointer to a null-terminated string.
 *
 * This function calculates the length of the string and prints the
 * second half of the string, or the last (length - 1) / 2 characters if the
 * length is odd, followed by a newline character.
 */

void puts_half(char *str)
{
if (str != NULL)
{
int length = 0;
int i;

while (str[length] != '\0')
length++;

if (length % 2 == 0)
{
for (i = length / 2; str[i] != '\0'; i++)
_putchar(str[i]);
}
else
{
for (i = (length - 1) / 2; str[i] != '\0'; i++)
_putchar(str[i]);
}
_putchar('\n');
}
}
