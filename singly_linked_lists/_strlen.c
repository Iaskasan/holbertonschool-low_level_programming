/**
 * _strlen - calculates the length of a string.
 * @str: pointer to the string.
 *
 * Return: The length of the string.
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
