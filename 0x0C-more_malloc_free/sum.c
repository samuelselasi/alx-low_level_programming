#include "main.h"

/**
 * sum - Add 2 numbers
 * @final_prod: final result
 * @next_prod: number
 * @next_len: length of number
 *
 * Return: None
 */

void sum(char *final_prod, char *next_prod, int next_len)
{
	unsigned int num, tens = 0;

	while (*(final_prod + 1))
	{
		final_prod++;
	}

	while (*(next_prod + 1))
	{
		next_prod++;
	}

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		final_prod--;
		next_prod--;
	}

	if (tens)
	{
		*final_prod = (tens % 10) + '0';
	}
}
