#include <stdarg.h>
#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

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

	/*checks if the number is negative or not */
	if ((signed int)num < 0)
	{
		num *= -1;
		string[nsign] = '-';
		nsign++;
	}

	/* checking wheather the the num uns_short, un_int or signed_int */
	if (num < SHRT_MAX) /*Short Int max value in limits library*/
		num = (unsigned short) num;
	else if (!num < INT_MAX)
		num = (unsigned int) num;

	/* checks if it fails to convert num to string */
	if (!number_converter(string + nsign, num, 10))
		return (-1);
	return (write(STDOUT_FILENO, string, nsign + sln(string + nsign)));
}
