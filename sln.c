#include "main.h"

/**
 * sln - gives the length of the given string
 * @c: string ginen
 * Return: int
 */
int sln(char *c)
{
	int x = 0;

	while (c[x] != '\0')
	{
		++x;
	}
	return (x);
}
