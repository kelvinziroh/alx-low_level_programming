#include "main.h"

/**
 * _abs - Display the absolute value of an integer
 *
 *  @i: Input number as integer
 *
 *  Return: Integer's absolute value
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);
	else
		return (i * -1);
}
