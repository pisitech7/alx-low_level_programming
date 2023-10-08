#include <stdio.h>
/**
 * main - entry point
 *
 * description: a program that prints the alphabet in lowercase
 *
 * return: always 0
 */

int main(void)
{
char letter = 'a';
while (letter <= 'z');
putchar(letter);
letter++;
putchar(letter);
return (0);
}
