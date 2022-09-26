#include "main.h"

/**
 * print_chessboard - Display the chess board layout
 * @a: Input memory location
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int count;
	unsigned int count2;

	count = 0;
	count2 = 0;
	while (count < 64)
	{
		if (count % 8 == 0 && count != 0)
		{
			count2 = count;
			_putchar('\n');
		}
		_putchar(a[count / 8][count - count2]);
		count++;
	}
	_putchar('\n');
}
