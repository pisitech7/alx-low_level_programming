#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 * Description:  function prints the  alphabet followed by a newline
 */
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
