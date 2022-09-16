#include <main.h>

/**
 * main - Print _putchar followed by a new line
 *
 * Return: 0 if program executes successfully
 */
int main(void)
{
	int txt[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count;
	int length;

	length = sizeof(txt) / sizeof(int);

	count = 0;
	while (count < length)
	{
		_putchar(txt[count]);
	}
	_putchar('\n');
	return (0);
}
