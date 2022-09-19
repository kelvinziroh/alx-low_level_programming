#include "main.h"

/**
 * swap_int - Swap integer values of two variables.
 * @a: pointer variable to the first variable.
 * @b: pointer variable to the second variale.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
