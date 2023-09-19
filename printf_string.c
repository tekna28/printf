#include "main.h"
#include<stdarg.h>
#include<stddef.h>

/**
 * printf_string - prints a string.
 *
 * @value: parameter.
 * Return: length of a string (Success)
 */
int printf_string(va_list value)
{
	char *string;
	int i, len;

	string = va_arg(value, char*);
	if (string == NULL)
	{
		string = "(nill)";
		len = _strlen(string);

		for (i = 0; i < len; i++)
		_putchar(string[i];
		return (len);
	}
	else
	{
	len = _strlen(string);
	for (i = 0; i < len; i++)
	_putchar(string[i]);
	return (len);
	}
}
