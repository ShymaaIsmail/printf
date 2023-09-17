#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - start point
 * Return: int
 */
int main()
{
	/* tests given by Alx in the intranet */
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);



	/*tests of the QA checker */
	_printf("%d\n", 1024); /*small positive num */
	printf("%d\n",1024);

	_printf("%d\n", -1024); /*small neg num */
        printf("%d\n",-1024);

	_printf("%d\n", 0); /*zer0 */
        printf("%d\n", 0);

	_printf("%d\n", INT_MAX); /*Const INT*/
        printf("%d\n",INT_MAX);

	_printf("%d\n", INT_MIN); /*INT_MIN */
        printf("%d\n", INT_MIN);

	_printf("%d\n", l); /*long int num */
        printf("%d\n", l);
	
	_printf("there is %d bytes in %d KB\n", 1024, 1);
        printf("there is %d bytes in %d KB\n", 1024, 1);
	
	_printf("%d - %d = %d\n", 1024, 2048, -1024);
        printf("there is %d bytes in %d KB\n", 1024, 1);
	
	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, INT_MIN + INT_MAX);
        printf("%d + %d = %d\n", INT_MIN, INT_MAX, INT_MIN + INT_MAX);

	_printf("%d\n", 10000);
	printf("%d\n", 10000);
	
	/*handling I specifier */
	_printf("%i\n", INT_MIN);
	printf("%i\n", INT_MIN);
	
	_printf("%i\n", INT_MAX);
	printf("%i\n", INT_MAX);
	
	_printf("%i - %i = %i\n", 1024, 2048, -1024);
        printf("%i - %i = %i\n", 1024, 2048, -1024);
        
        _printf("%i + %i = %i\n", INT_MIN, INT_MAX, INT_MIN + INT_MAX);
        printf("%i + %i = %i\n", INT_MIN, INT_MAX, INT_MIN + INT_MAX);

	_printf("%i == %d\n", 1024, 1024);
	printf("%i == %d\n", 1024, 1024);

	_printf("%i\n", 10000);
	printf("%i\n", 10000);
	
	_printf("%i\n", 1024);
	printf("%i\n", 1024);
	
	_printf("%i\n", -1024);
	printf("%i\n", -1024);

	_printf("%i\n", 0);
	printf("%i\n", 0);

	_printf("iddi%diddiiddi\n", 1024);
        printf("iddi%diddiiddi\n", 1024);

	_printf("iddi%iiddiiddi\n", 1024);
        printf("iddi%iiddiiddi\n", 1024);
}
