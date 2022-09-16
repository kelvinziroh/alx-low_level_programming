#include "main.h"

/**
 * times_table - Prints 9 times table starting with 0
 *
 * Return: None
 */
void times_table(void)
{
	int a, b, result;

	a = 0;
	while (a <= 9)
	{
		_putchar(48);

		b = 1;
		while (b <= 9)
		{
			result = a * b;
			_putchar(44);
			_putchar(32);
			if (result <= 9)
			{
				_putchar(32);
				_putchar(result + 48);
			}
			else
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
