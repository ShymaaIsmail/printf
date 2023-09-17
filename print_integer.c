#include <stdarg.h>
#include "main.h"

/**
 * print_integer - print the given integer, handles the %d and %i
 * @integer: the given argument that I want to print
 * Return: (int) the length of the given decimal
 */
int print_integer(va_list  integer)
{
	int num = va_arg(args, int);
	int sign = num % 10, counter = 0, printed_number = num;
	int temp, current;

	/* handling negative sign */
	if (sign < 0)
	{
		_putchar('-');
		printed_number *= -1;
		counter++;
	}
	temp = printed_number % 10;
	printed_number /= 10;
	++counter;
	/*I converted the number from negative to positive, thus start printing */
	while (printed_number)
	{
		counter++;
		temp *= 10;
		temp += (printed_number % 10);
		printed_number /= 10;
	}
	while (temp)
	{
		current = (temp % 10) + '0';
		_putchar(current);
		temp /= 10;
	}
	return (counter);
}
