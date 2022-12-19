#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate password
 * Return: Always 0
 */

int main(void)
{
	int p;
	int s;

	srand(time(NULL));

	s = 0;
	while (s <= 2645)
	{
		p = (rand() % (128 - 32)) + 32;
		s += p;
		putchar(p);
	}
	putchar(2772 - s);
	putchar(10);
	return (0);
}
