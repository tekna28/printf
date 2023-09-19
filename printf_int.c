#include "main.h"
#include<stdarg.h>

/**
 * printf_int - prints an integer.
 *
 * @value: parameter.
 * Return: i (Success)
 */
int printf_int(va_list value)
{
	int n, number, digit, last, e = 1, i = 1;

	n = va_arg(value, int);
	last = n % 10;

	n = n / 10;
	number = n;
	if (last < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		last = -last
		i++
	}
	if (number > 0)
	{
		while ((number / 10) != 0)
		{
			e = e * 10;
			number = number / 10;
		}
		number = n;

		while (e > 0)
		{
			digit = number / e;
			_putchar(digit + '0');
			number = number - (digit * e);
			e = e / 10;
			i++;
		}
	}
}
