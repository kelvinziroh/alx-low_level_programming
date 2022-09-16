#include <stdio.h>

/**
 * print_to_98 - Print all numbers from the argument passed to 98
 *
 * @n: Input number
 *
 * Return: None
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
}
