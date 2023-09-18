#ifndef _custom_print_f
#define _custom_print_f

#include <stdarg.h>

/**
 * struct arg_indicator - format tokens struct definition
 * @token: single specifier
 * @print: function pointer to be executed
 * Description: struct for format specifier in printf
 */
typedef struct arg_indicator
{
char *token;
int (*print)();
} arg_indicator_type;

/*core functions*/
int _printf(const char *format, ...);
int print_and_count(va_list arg_list, const char *format);
int validate_format(const char *format);

/* printing functions*/
int _putchar(char c);
int print_percent(void);
int print_character(va_list char_arg);
int print_string(va_list string_arg);
int print_digit(va_list digit_arg);
int print_integer(va_list integer_arg);

/* String Functions*/
int sln(char *c);
#endif
