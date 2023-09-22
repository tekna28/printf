#include <stdarg.h>
#include "main.h"

/**
 * _printf - chooses the right function for printing
 *
 *@format: character string.
 * Return: number of characters printed (Success)
 */
int _printf(const char *format, ...)
{
convert con[] = {
{"%c", printf_char}, {"%s", printf_string}, {"%%", printf_percent},
{"%i", printf_int}, {"%d", printf_decimal}, {"%b", printf_binary},
{"%u", print_unsigned}
};

va_list ptr;
int i = 0, j, len = 0;
va_start(ptr, format);

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

This:
while (format[i] != '\0')
{
j = 6;
while (j >= 0)
{
if (con[j].id[0] == format[i] && con[j].id[1] == format[i + 1])
{
len += con[j].f(ptr);
i = i + 2;
goto This;
}
j--;
}
_putchar(format[i]);
len++;
i++;
}
va_end(ptr);
return (len);
}
