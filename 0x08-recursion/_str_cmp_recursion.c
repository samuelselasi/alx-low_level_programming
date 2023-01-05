/**
 * _str_cmp_recursion - compare 1st and 2nd half of string
 * @first: first half of stroing
 * @last: last half of string
 * Return: 1 if palindrome, 0 if not
 */

int _str_cmp_recursion(char *first, char *last)
{
	if (first >= last)
	{
		return (1);
	}
	if (*first == *last)
	{
		return (_str_cmp_recursion(first + 1, last - 1));
	}

	return (0);
}
