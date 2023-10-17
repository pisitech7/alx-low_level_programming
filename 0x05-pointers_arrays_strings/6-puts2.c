#include "main.h"
#include <stddef.h>

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: A pointer to a null-terminated string to print.
 *
 * Description: This function takes a string and prints every other character,
 * starting with the first character, followed by a newline character.
 */

void puts2(char *str)
{
if (str != NULL)
{
int index = 0;

while (str[index] != '\0')
{
_putchar(str[index]);
index += 2;
}
_putchar('\n');
}
}
