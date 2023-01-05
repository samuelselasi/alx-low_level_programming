/**
 * _prime_number - divide by higher divisor and skip even
 * @n: number to check prime
 * @divisor: the divisor
 * Return: 1 if prime, 0 if not, or recursive function call
 */

int _prime_number(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	return (_prime_number(n, divisor + 1));
}
