#ifndef HEADER
#define HEADER

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list value);
int printf_percent(void);

/**
 * struct format - for the conversion specifiers of printf.
 *
 *@id: pointer to a char.
 *@f: function pointer.
 */
typedef struct format
{
  char *id;
  int (*f)();
} format;

#endif
