#include "main.h"
/**
 * infinite_add - add two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: buffer size
 *
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, i = 0, j;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;
	while (i < size_r)
		r[i++] = '0';
	i = 0;
	while (len1 > 0 || len2 > 0 || carry > 0)
	{
		int d1 = (len1 > 0) ? n1[--len1] - '0' : 0;
		int d2 = (len2 > 0) ? n2[--len2] - '0' : 0;
		int sum = d1 + d2 + carry;

		r[i++] = (sum % 10) + '0';
		carry = sum / 10;
	}
	if (i > size_r)
		return (0);
	j = 0;
	while (j < i / 2)
	{
		char temp = r[j];

		r[j] = r[i - j - 1];
		r[i - j - 1] = temp;
		j++;
	}
	r[i] = '\0';
	return (r);
}
