#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct print - struct to define pointers
 * @p:  data type char
 * @f: function asociated.
 */
typedef struct print
{
	char p;
	int (*f)(va_list ap1);
} prt_t;
int _putchar(char c);
int _printf(const char *format, ...);
int (*check_mod(char com))(va_list);
int print_c(va_list character);
int print_s(va_list string);
int int_i(va_list inte);
int int_d(va_list inte);
#endif
