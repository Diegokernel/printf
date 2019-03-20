#include "holberton.h"
/**
 * int_i - print an integer with d specifier
 * @inte: arguments
 * Return: integer.
 */
int int_i(va_list inte)
{
	unsigned int i;
	int num, count, lon;

	count = 0;
	lon = 1;

	num = va_arg(inte, int);
	if (num < 0)
	{
		count = count + _putchar('-');
		i = -num;
	}
	else
		i = num;
	lon = 1;
	while (i / lon > 9)
		lon *= 10;
	while (lon != 0)
	{
		count += _putchar(i / lon + '0');
		i %= lon;
		lon /= 10;
	}
	return (count);
}
