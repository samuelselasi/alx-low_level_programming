#include "main.h"

/**
 * print_chessboard - function to print chessboard
 * @a: 2D array
 * Return: None
 */

void print_chessboard(char (*a)[8])
{
	unsigned int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar(10);
	}
}
