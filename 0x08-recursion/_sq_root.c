/**
 * _sq_root - print sqrt of an integer
 * @n: the integer
 * @root: the root of n
 *
 * Return: square root of n
 * -1 if not natural square root
 */

int _sq_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	return (_sq_root(n, root + 1));
}
