/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}
