#include <stdarg.h>
#include "main.h"

/**
 * printf_binary - prints a binary number who
 * was converted from unsigned int.
 *
 *@value: parameter.
 * Return: count (Success)
 */
int printf_binary(va_list value)
{
int f = 0, count = 0, i, n1 = 1, n2;
unsigned int number, p1;
number = va_arg(value, unsigned int);

for (i = 0; i < 32; i++)
{
p1 = ((n1 << (31 - i)) & number);
if (p1 >> (31 - i))
f = 1;
if (f)
{
n2 = p1 >> (31 - i);
_putchar(n2 + 48);
count++;
}
}
if (count == 0)
{
count++;
_putchar('0');
}
return (count);
}
