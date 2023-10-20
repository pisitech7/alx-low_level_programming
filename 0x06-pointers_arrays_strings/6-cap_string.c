/**
 * string_toupper - Changes all lowercase letters to uppercase in a string.
 * @str: The input string to modify.
 *
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 'a' + 'A';
	}
	i++;
	}
	return (str);
}
