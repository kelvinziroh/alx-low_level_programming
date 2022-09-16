#include "main.h"

/**
 * print_sign - Displays if a number is a positive or a negative number
 *
 * @n: The input number
 *
 * Return: 1 if the input number is positive, -1 if number is negative
 * 0 if number is 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
