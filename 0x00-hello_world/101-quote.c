#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always i (error)
 * */
int main(void)
{
/* Use the write system call to print to stderr (file descriptor 2) */
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
