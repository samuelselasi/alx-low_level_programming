#include "main.h"
/**
 * leet - encode string to 1337
 * @s: the string
 * Return: 1337 string
 */

char *leet(char *s)
{
	int i;
	int j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = b[j];
			}
		}
	}
	return (s);
}
