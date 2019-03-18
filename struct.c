#include "holberton.h"
/**
* check_mod - check for modifiers
* @com: to compare with structure members
* Return: count of char
*/
int (*check_mod(char com))(va_list)
{
	int i;
	prt_t po[] = {
		{'c', print_c},
		{'s', print_s},
		{'i', int_i},
		{'d', int_d},
		{'\0', '\0'}
	};

	for (i = 0; po[i].p; i++)
	{
		if (po[i].p == com)
			return (po[i].f);
	}
	return (NULL);
}
