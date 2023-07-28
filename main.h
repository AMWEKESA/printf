#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
  * struct fun - structure for specifier to ptr
  *
  *@sp: char to be compared
  *@fn: appropriate function
  *
  */

typedef struct fun
{
	char *sp;
	int (*fn)(va_list);
}fun_sp;

int _putchar(char c);
int _printf(const char *format, ...);
int (*specifier_check(const char *format))(va_list);
int print_char(va_list args);
int print_str(va_list args);
int print_pcent(va_list args);
int print_integers(va_list args);
void print_bin(va_list bin);

#endif /* main.h */
