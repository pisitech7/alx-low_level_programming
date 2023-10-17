#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse.
 * @s:the string to print.
 *
 * return :0
 */

void print_rev(char *s)
{
int c = 0;
int i = 0;
while (s[c] != '\0')
{
c++;
}
for (i = c - 1; i >= 0; i--)
{
	putchar(s[i]);
}
	putchar('\n');
}
