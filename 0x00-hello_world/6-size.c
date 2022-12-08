#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char acharacter;
	int aninteger;
	long along;
	long long alonglong;
	float afloat;

	printf("Size of a char: %d byte(s)\n", sizeof(acharacter));
	printf("Size of an int: %d byte(s)\n", sizeof(aninteger));
	printf("Size of a long int: %d byte(s)\n", sizeof(along));
	printf("Size of a long long int: %d byte(s)\n", sizeof(alonglong));
	printf("Size of a float: %d byte(s)\n", sizeof(afloat));

	return (0);
}
