#include "main.h"

/**
 * reverse_array - Reverses an array of integers.
 * @a: array.
 * @n: number of array elements.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int var;

	i = 0;
	while (i < n - 1)
	{
		j = i + 1;
		while (j > 0)
		{
			var = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = var;
			j--;
		}
		i++;
	}
}
