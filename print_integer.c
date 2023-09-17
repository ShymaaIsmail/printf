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
	int nsign = 0;
	unsigned long num = va_arg(integer_argument, unsigned long);
	char string[22];

	if ((signed int)num < 0) /*negative */
	{
		num *= -1;
		string[nsign] = '-';
		nsign++;
	}

	if (num < SHRT_MAX)
		num = (unsigned short) num;
	else if (!num < INT_MAX)
		num = (unsigned int) num;

	/* checcks if it fails to convert num to string */
	if (!cnv(string + nsign, num, 10))
		return (-1);
	return (write(STDOUT_FILENO, string, nsign + sln(string + nsign)));
}
