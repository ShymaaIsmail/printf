#include <stdarg.h>
#include <stddef.h>
#include "main.h"
/**
* print_string - print string
*@string_arg: pointer to the corresponding argument
*Return: return length of the printed string
*
*/
int print_string(va_list  string_arg)
{
	int char_count = 0;
	int iterator = 0;

	if (string_arg != NULL)
	{
		char *string = (char *)va_arg(string_arg, char *);

		if (string != NULL)
		{
			while (string[iterator] != '\0')
			{
				_putchar(string[iterator]);
				char_count++;
				iterator++;
			}
		}
		else
		{
			_putchar('(');
			_putchar('n');
			_putchar('u');
			_putchar('l');
			_putchar('l');
			_putchar(')');
			char_count = 6;
		}
	}
	else
	{
			_putchar('(');
			_putchar('n');
			_putchar('u');
			_putchar('l');
			_putchar('l');
			_putchar(')');
			char_count = 6;
	}
	return (char_count);
}
