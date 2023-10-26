#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a sting followed by a new line
 * @s: the string to print
 *
 * Retrun: always 0 for successfull completion
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
