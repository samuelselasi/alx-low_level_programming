#include <stdio.h>
/**
 * main - main function
 *
 * Return: none
 */
int main(void)
{
	int i = 2;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);
	while (i < 50)
	{
		printf("%ld", c);
		i++;
		a = b;
		b = c;
		c = a + b;
		if (i < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
