#include <unistd.h>
#include <string.h>

/**
 * rand - Custom rand() func
 * Return: Predetermined Numbers
 */
int rand(void)
{
	static int num = -1;

	num++;

	if (num == 0)
		return (8);

	if (num == 1)
		return (8);

	if (num == 2)
		return (7);

	if (num == 3)
		return (9);

	if (num == 4)
		return (23);

	if (num == 5)
		return (74);

	return (num * num % 30000);
}
