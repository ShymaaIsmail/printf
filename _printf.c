#include "main.h"
#include <stdarg.h>

/**
 * _printf - This is a custom printf function for ALX printf project
 * It is to write on the standard output
 * @format: It is a character string that may contain normal text
 * in addition to zero or more directive
 *@...: This represents unlimited number of arguments
 *as called variadic function
 * Return: On success, it returns number of characters printed
 * excluding the null byte used to end output to strings
 */
int _printf(const char *format, ...)
{
	int is_valid = 0;
	int total_printed_symbols = -1;

	is_valid = validate_format(format);
	if (is_valid)
	{
		va_list format_arg_ptr;

		va_start(format_arg_ptr, format);
		total_printed_symbols = print_and_count(format_arg_ptr, format);
		va_end(format_arg_ptr);
	}
	return (total_printed_symbols);
}
