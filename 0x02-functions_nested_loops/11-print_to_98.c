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
	int count;

	if (n > 98)
	{
		count = n;
		while (count > 98)
		{
			printf("%d, ", count);
			count--;
		}
	}
	else if (n < 98)
	{
		count = n;
		while (count < 98)
		{
			printf("%d, ", count);
			count++;
		}
	}
	printf("%d\n", count);
}
