#include "main.h"
#include<stdarg.h>

/**
 * printf_char - prints a character
 *
 * @value: arguments.
 * Return: 1(Success)
 */
int printf_char(va_list value)
{
	char c;

	c = va_arg(value, int);
	_putchar(c);
	return (1);
}
