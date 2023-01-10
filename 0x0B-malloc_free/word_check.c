#include "main.h"

/**
 * word_check - check words in string
 * @s: the string
 * Return: no. of words
 */

int word_check(char *s)
{
	int i, flag, wc;

	flag = 0;
	wc = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			wc++;
		}
	}
	return (wc);
}
