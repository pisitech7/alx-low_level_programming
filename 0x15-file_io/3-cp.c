#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

#define BUFF_SIZE 1024

/**
 * error_exit - Prints an error message to stderr and exits with the provided code
 * @exit_code: The exit code to use when terminating the program
 * @message: The error message to print
 */
void error_exit(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments passed to the program
 * @argv: Array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, other values on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFF_SIZE];

	if (argc != 3)
	{
	error_exit(97, "Usage: cp file_from file_to");
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	error_exit(98, "");
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(file_from);
	error_exit(99, "");
	}
	while ((bytes_read = read(file_from, buffer, BUFF_SIZE)) > 0)
	{
	bytes_written = write(file_to, buffer, bytes_read);
	if (bytes_written != bytes_read || bytes_written == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(file_from);
	close(file_to);
	error_exit(99, "");
	}
	}
	if (bytes_read == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	close(file_from);
	close(file_to);
	error_exit(98, "");
	}
	if (close(file_from) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			file_from);
	error_exit(100, "");
	}
	if (close(file_to) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			file_to);
	error_exit(100, "");
	}
	return (0);
}
