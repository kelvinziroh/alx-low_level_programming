#include <unistd.h>

/**
 * main - Print a string to stderr
 *
 * Return: 0 if program executes successfully
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	return (0);
}
