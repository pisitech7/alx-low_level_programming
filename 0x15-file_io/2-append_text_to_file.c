#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file with specified permissions and writes content
 * to it
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status;
	size_t content_length = 0;

	if (filename == NULL)
	return (-1);
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR);
	if (file_descriptor == -1)
	return (-1);
	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}
	while (text_content[content_length] != '\0')
	content_length++;
	write_status = write(file_descriptor, text_content, content_length);
	if (write_status == -1)
	{
	close(file_descriptor);
	return (-1);
	}
	close(file_descriptor);
	return (1);
}

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The text content to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status;
	size_t content_length = 0;

	if (filename == NULL || text_content == NULL)
	return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	while (text_content[content_length] != '\0')
	content_length++;
	write_status = write(file_descriptor, text_content, content_length);
	if (write_status == -1)
	{
	close(file_descriptor);
	return (-1);
	}
	close(file_descriptor);
	return (1);
}
