#include <stdarg.h>
#include "main.h"

/**
 * print_integer - print the given integer, handles the %d and %i
 * @integer: the given argument that I want to print
 * Return: (int) the length of the given decimal
 */
int print_integer(va_list  integer)
{
	signed long num = va_arg(integer, int);
	signed long counter = 0, printed_number = num;
	signed long temp = 0, current, number = num, idx = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if ((signed long) num < 0)
	{
		_putchar('-');
		printed_number *= -1;
		counter++;
	}
	while (printed_number)
	{
		counter++;
		temp *= 10;
		temp += (printed_number % 10);
		printed_number /= 10;
	}
	while (number % 10 == 0)
	{
		idx++;
		number /= 10;
	}
	while (temp)
	{
		current = (temp % 10) + '0';
		_putchar(current);
		temp /= 10;
	}
	while (idx--)
		_putchar('0');
	return (counter);
}
