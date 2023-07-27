#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
  * _printf - prints input parameters to stdout
  *
  * @format: string to be printed
  *
  * Return: Success always
  */

int _printf(const char *format, ...)
{
	int i = 0;
	int counter = 0;
	va_list inputs;
	int (*fn)(va_list);

	va_start(inputs, format);
	if (format == NULL)
		return (0);
	/* iterate the formart pointer only when its not null */
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			counter = write(1, &format[i], 1);
			++i;
			continue;
		}
		else if (format[i] == '%')
		{
			++i;
			if (format[i] == '\0')
				break;
		/* call specifier_check function */
			fn = specifier_check(&format[i]);
			if (fn != NULL)
			{
				counter += fn(inputs);
				i++;
				continue;
			} else
			{
				putchar('%');
				putchar(format[i]);
				counter += 2;
				i++;
				continue;
			}
		}

	}
	va_end(inputs);
	return (counter);
}
