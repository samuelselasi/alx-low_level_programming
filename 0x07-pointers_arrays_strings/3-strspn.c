#include "main.h"

/**
 *  _strspn - function to return length of string
 *  @s: string to search
 *  @accept: string to compare
 *
 *  Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (bytes);
			}
		}
	}
	return (bytes);
}
