#include "main.h"
#include "_str_cmp_recursion.c"
#include "2-strlen_recursion.c"

/**
 * is_palindrome - check if string is palindrome
 * @s: the string
 * Return: 1 if palindorme, 0 if not
 */

int is_palindrome(char *s)
{
	return (_str_cmp_recursion(s, (s + _strlen_recursion(s) - 1)));
}
