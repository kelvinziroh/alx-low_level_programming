#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: pointer variable to string.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	int new_count = count;

	while (new_count >= 0)
	{
		_putchar(s[new_count]);
		new_count--;
	}
}
