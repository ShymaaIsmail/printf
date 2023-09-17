#include <stddef.h>
/**
 * validate_format - validate format pointer to ensure appropriate processing
 * @format: pointer to string that is provided by the program user
 * Return:  this return 1 when valid and 0 when not valid
*/
int validate_format(const char *format)
{
	int is_valid = format != NULL;

	return (is_valid);
}
