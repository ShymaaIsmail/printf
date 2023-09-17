#include <stdarg.h>
#include "main.h"

/**
 * handle_indicator - handle the % indicators
 * @next_char: next_char
 * @arg_list: arg_list
 * @format_current_index: format_current_index
 * @count_chars: count_chars
 * @arr_result: arr_result
 * Return: array of int for (count char and format cuurent index)
 *
*/
void handle_indicator(int *arr_result, char next_char, va_list arg_list,
						int format_current_index, int count_chars)
{
	int indicator_index = 0, is_handeled_token = 0;
	arg_indicator_type indicators[] = { {"%", print_percent},
	{"c", print_character}, {"s", print_string}, {"d", print_integer},
	{"i", print_integer}};

	while (indicator_index < 5)
	{
		if (next_char == *indicators[indicator_index].token)
		{
			count_chars += indicators[indicator_index].print(arg_list);
			is_handeled_token = 1;
			break;
		}
			indicator_index++;
		}
			if (is_handeled_token)
				format_current_index += 2;
			else
				{
					if (next_char == '%')
					{
						count_chars += print_percent();
						format_current_index += 2;
					}
					else if (next_char != '\0')
					{
						count_chars += print_percent();
						format_current_index += 1;
					}
					else
					{
						format_current_index += 1;
					if (next_char == '\0' && count_chars == 0)
						count_chars = -1;
					}

				}
		arr_result[0] = count_chars;
		arr_result[1] = format_current_index;
}
/**
 * print_and_count - print formatted text and count its chars
 * @arg_list: variadic pointer to the last fixed argument
 * @format: pointer of the format string to be printed
 * Return: returns count of the printed chars except the null terminator
 *
*/
int print_and_count(va_list arg_list, const char *format)
{
	int count_chars = 0;
	int format_current_index = 0, format_next_index = 0;
	char current_char = 0, next_char = 0;
	int arr_result[2];

	while (format[format_current_index] != '\0')
	{
		format_next_index = format_current_index + 1;
		current_char = format[format_current_index];
		next_char = format[format_next_index];
		if (current_char == '%')
		{
			handle_indicator(arr_result, next_char, arg_list,
										format_current_index, count_chars);
			count_chars	= arr_result[0];
			format_current_index = arr_result[1];
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
