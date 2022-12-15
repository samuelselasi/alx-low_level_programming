#include <stdio.h>
/**
 * main - Entry point
 *
 * description - largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	unsigned int i;
	unsigned long l;

	i = 2;
	l = 612852475143;
	while (i != l)
	{
		if ((l % i) == 0)
		{
			l = l / i;
		}
		else
		{
			i++;
		}
	}
	printf("%lu\n", l);
	return (0);
}
