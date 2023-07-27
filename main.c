#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int main(void)
{
    char *str = "Hello, world!";
    int num = 12345;
    char ch = 'A';

    int printed_chars = _printf("String: %s\n", str);
    _printf("Return value: %d\n", printed_chars);

    printed_chars = _printf("Integer: %i\n", num);
    _printf("Return value: %d\n", printed_chars);

    printed_chars = _printf("Character: %c\n", ch);
    _printf("Return value: %d\n", printed_chars);

    _printf("%%\n");
    printed_chars = _printf("Return value: %d\n", printed_chars);

    return (0);
}
