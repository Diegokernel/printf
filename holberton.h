#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct print
{
  char *p;
  void (*f)(va_list ap1);
} print_t;
int _putchar(char c);
int _printf(const char *format, ...);
int cha(va_list chara);

#endif
