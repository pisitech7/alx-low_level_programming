#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the alphabet in lowercase.
 *
 * Return: Always 0
 */
int main(void)

{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    putchar(letter);

    return (0);
}
i
