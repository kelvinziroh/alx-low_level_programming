#include "main.h"

/**
 * print_alphabet - Print alphabets in lowercase
 *
 * Return: 0 if program executes successfully
 */
void print_alphabet(void)
{
	int count;

	count = 97;
	while (count < 122)
	{
		_putchar(count);
		count++;
	}
	_putchar("\n");
}
