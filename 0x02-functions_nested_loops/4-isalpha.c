#include "main.h"

/**
 * _isalpha - Displays 1 if input is a letter and
 * 0 if otherwise
 *
 * @c: The character's ASCII code
 *
 * Return: 1 if input is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
	_putchar('\n');
}
