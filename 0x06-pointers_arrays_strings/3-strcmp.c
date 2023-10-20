/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return:
 * - A negative integer if s1 is less than s2.
 * - 0 if s1 is equal to s2.
 * - A positive integer if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	i++;
	}
	if (s1[i] != s2[i])
	return (s1[i] - s2[i]);

	return (0);
}
