#include <stdarg.h>
#include "main.h"
/**
* print_digit - takes the digit from the variadic list and out it in the
* std output using write function
*
* @param: argument (variadic list) pointer to the argumented to be printed
* Return: (int) the length of the given digit will be printed
*/
int print_digit(va_list param) {
  int printed_digit = va_arg(digit_arg, int);
  return write(STDOUT_FILENO, &digit, 1);
}
