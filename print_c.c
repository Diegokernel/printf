#include "holberton.h"
#include <stdarg.h>
#include <stadio.h>

/*
* print_c - Function that prints a charatcter in printf function.
* @character: character to print.
*
* Return: int.
*/
int print_c(va_list character)
{
	character = (char) va_arg(character, int);

	_putchar(character);
	return (1);
}
