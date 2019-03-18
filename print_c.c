#include "holberton.h"

/*
* print_c - Function that prints a charatcter in printf function.
* @character: character to print.
*
* Return: int.
*/
int print_c(va_list character)
{
	char c = (char)va_arg(character, int);

	_putchar(c);
	return (1);
}
