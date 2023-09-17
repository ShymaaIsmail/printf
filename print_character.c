#include <stdarg.h>
#include "main.h"
/**
* print_character - print character
*@char_arg: pointer to the corresponding argument
*Return: return length of the printed char
*
*/
int print_character(va_list  char_arg)
{
		char character = (char)va_arg(char_arg, int);

		_putchar(character);
		return (1);
}
