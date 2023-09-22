#ifndef HEADER
#define HEADER

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include <limits.h>

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
} convert;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list value);
int printf_percent(void);
int _strlen(char *s);
int printf_string(va_list value);
int printf_decimal(va_list value);
int printf_int(va_list value);
int printf_binary(va_list value);
int print_unsigned(va_list value);

#endif
