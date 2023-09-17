#include <stdarg.h>
#include "main.h"
#include <limits.h>

/**
 * print_integer - print the given integer, handles the %d and %i
 * specifiers in the printf function
 * @integer_argument: the given argument that I want to print
 * Return: (int) the length of the given decimal
 */
int print_integer(va_list  integer_argument)
{
	int num_sign = 0;
	unsigned long num = va_arg(integer_argument, unsigned long);
	char string_num[22];

	if ((signed int)num < 0) /*negative */
	{
		num *= -1;
		string_num[num_sign] = '-';
		num_sign++;
	}

	if (num < SHRT_MAX)
		num = (unsigned short) num;
	else if (!num < INT_MAX)
		num = (unsigned int) num;

	if (!number_converter(string_num + num_sign, num, 10))
		return (-1);
	return (write(STDOUT_FILENO, string_num, sln(string_num)));
}
