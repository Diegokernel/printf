#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/*
* print_s - Function that prints strings in printf function.
* @string: string to print.
*
*/
int print_s(va_list string)
{
	int i;
	char *s;

	s = (char)va_arg(string, char *);

	if (s == "\0")
	{
		s = "NULL";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		i = i + putchar(s[i]);
	}
	return (i);
}

