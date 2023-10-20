/**
 * string_toupper - Changes all lowercase letters in a string to uppercase.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
	char *result = str;

	while (*str)
	{
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 'a' + 'A';
	}
	str++;
	}

	return (result);
}
