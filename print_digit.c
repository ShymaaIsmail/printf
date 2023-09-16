#include <stdarg.h>
#include "main.h"
/**
 *print_digit - takes the digit from the variadic list and out it in the
 *std output using write function
 *@given_num: argument (variadic list) pointer to the argumented to be printed
 *Return: (int) the length of the given digit will be printed
 */
int print_digit(va_list given_num)
{
	int printed_digit = va_arg(given_num, int);

	return (write(STDOUT_FILENO, &printed_digit, 1));
}
