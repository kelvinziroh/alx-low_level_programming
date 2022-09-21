#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array parameter.
 * @n: input n elements.
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", *(a + count));
		if (count != (n - 1))
			printf(", ");
		count++;
	}
	printf("\n");
}
