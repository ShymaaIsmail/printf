#include <stdarg.h>
#include "main.h"
/**
 * print_integer - print the given integer, handles the %d and %i
 * specifiers in the printf ffunction
 * @integer_arg: the given argument that I want to print
 * Return: (int) the length of the given decimal
 */
int print_integer(va_list  integer_arg)
{
	int num = va_arg(integer_arg);
	int cnt = 0;

	while (num)
	{
		count += print_digit(integer_arg);
		num /= 10;
	}
	return (cnt);
}
