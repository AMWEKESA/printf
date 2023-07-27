#include "main.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_str - print string
 *
 * @args: arguments
 *
 * Return: number of characters printed out
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char*);

	puts(str);
	return (strlen(str));
}
