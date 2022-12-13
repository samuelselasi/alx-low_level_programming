#include <stdio.h>
/**
 * main - main function
 *
 * Return: none
 */
int main(void)
{
	int i = 0;
	long int a = 1;
	long int b = a;
	long int c = a + b;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			i += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", i);
	return (0);
}
