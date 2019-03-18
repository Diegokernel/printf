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
	char *p;
	void (*f)(va_list ap1);
} prt_t;
int _putchar(char c);
int _printf(const char *format, ...);
int (*sp(const char *format))(va_list);
int cha(va_list chara);
int str(va_list strn);
#endif
