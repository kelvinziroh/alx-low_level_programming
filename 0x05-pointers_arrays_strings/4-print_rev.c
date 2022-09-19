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

	while (*s != '\0')
	{
		count++;
		str++;
	}

	while (count >= 0)
	{
		_putchar(str[count]);
		count--;
	}
}
