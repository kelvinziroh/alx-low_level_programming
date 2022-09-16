#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times
 *
 * Return: 0 if program executes successfully
 */
void print_alphabet_x10(void)
{
	int i,j;

	i = 0;
	while (i < 10)
	{
		j = 97;
		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
