#include "main.h"

/**
 * _islower - Displays 1 if input is a lowercase
 * character. 0 if otherwise
 *
 * @c: The character's ASCII code
 *
 * Return: 1 if character is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
	_putchar('\n');
}
