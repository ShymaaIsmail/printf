#include "main.h"
#include <stdarg.h>

/**
 * cnv - function that convert number to a string in any given base
 * @s: param string
 * @val: param unsigned long
 * @b: the base given to convert to
 * Return: int (length of the given string)
 */
int cnv(char *s, unsigned long val, int b)
{
	int len = 0;
	int x = int ('0');

	while (val > 0)
	{
		int r = val % b;

		s[len] = r + x;
		len++;
		val = val / b;
	}
	s[len] = '\0';
	return (len);
}
