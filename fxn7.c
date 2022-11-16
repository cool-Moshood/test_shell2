#include "main.h"


/**
 * concat_malloc_str - make malloc'd string writable
 * @string: malloc'd string to concat to
 * @first_str: first string to concat
 * @sec_str: second string to concat
 *
 * Return: void
 */
void concat_malloc_str(char *string, char *first_str, char *sec_str)
{
	_strcpy(string, "");
	_strcat(string, first_str);
	_strcat(string, sec_str);
}
