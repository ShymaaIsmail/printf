#include <stdarg.h>
#include "main.h"

/**
 * print_and_count - print formatted text and count its chars
 * @arg_list: variadic pointer to the last fixed argument
 * @format: pointer of the format string to be printed
 * Return: returns count of the printed chars except the null terminator
 *
*/
int print_and_count(va_list arg_list, const char *format)
{
	int count_chars = 0, indicator_index = 0;
	int format_current_index = 0, format_next_index = 0;
	char current_char = 0, next_char = 0;
	arg_indicator_type indicators[] = { {"%", print_percent},
	{"c", print_character}, {"s", print_string}, {"d", print_digit},
	{"i", print_integer}};
	while (format[format_current_index] != '\0')
	{
		indicator_index = 0;
		format_next_index = format_current_index + 1;
		current_char = format[format_current_index];
		next_char = format[format_next_index];
		if (current_char == '%')
		{
			while (indicator_index < 5)
			{
			if (next_char == *indicators[indicator_index].token)
			{
				count_chars += indicators[indicator_index].print(arg_list);
				break;
			}
			indicator_index++;
			}
			format_current_index += 2;
		}
		else
		{
			_putchar(current_char);
			count_chars++;
			format_current_index++;
		}
	}
	return (count_chars);
}
