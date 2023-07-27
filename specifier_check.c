#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
  * specifier_check - check if the specifier is valid
  * it should assign it the appopriate function
  *
  * @format: specifier
  *
  * Return: pointer to approprate function
  */

int (*specifier_check(const char *format))(va_list)
{
	int i;

	fun_sp func_arr[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pcent},
		{"i", print_integers},
		{"d", print_integers},
		{NULL, NULL}};

	i = 0;
	for (; func_arr[i].sp != NULL; ++i)
	{
		if (*(func_arr[i].sp) == *format)
			return (func_arr[i].fn);
	}
	return (NULL);

}
