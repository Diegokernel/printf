#include "holberton.h"
/**
*
*
*
*/
int _printf(const char *format, ...)
{
	int i; 
	int j = 0;
	va_list list;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (i = 0; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			j++;
		}
		if (!format[i])
			return (j);
		f = sp(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (j);
}
/**
*
*
*
*/
int (*sp(const char *format))(va_list)
{
	int i;
	print_t po[] = {
		{"c", print_c},
		{NULL, NULL}
	};

	for (i = 0; po[i].p != NULL; i++)
	{
		if (*(po[i].p) == *format)
		{
			break;
		}
	}
	return (po[i].f);
}
