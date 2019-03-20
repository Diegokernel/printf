#include "holberton.h"
/**
* _printf - check for modifiers
* @format: to compare with structure members
* Return: count of char
*/
int _printf(const char *format, ...)
{
	int i, j;
	va_list ap1;
	int (*sp)(va_list);

	j = 0;
	va_start(ap1, format);
	i = 0;
	if (!format)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			for (; format[i + 1] == ' '; i++)
				;
			if (format[i + 1] == '\0')
				return (-1);
			sp = check_mod(format[i + 1]);
			if (sp != NULL)
				j += sp(ap1);
			else
			{
				j += _putchar('%');
				if (format[i + 1] != '%')
					j += _putchar(format[i + 1]);

			}
			i++;
		}
		else
			j += _putchar(format[i]);
		i++;
	}
	va_end(ap1);
	return (j);
}
