#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/*
 * print_s - Function that prints strings in printf function.
 * @string: string to print.
 *
 */
int print_s(va_list ap1)
{
	int i;
	char *s;

	s = va_arg(ap1, char *);

	for (i = 0; s[i]; i++)
	{
		if (s == NULL)
			s = "(null)";
		_putchar(s[i]);
	}
	return (i);
}
