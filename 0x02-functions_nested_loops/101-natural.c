#include <stdio.h>
/**
 * main - Entry point
 *
 * description - compute sum of
 * multiples of 3 and 5 below 1024
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}
