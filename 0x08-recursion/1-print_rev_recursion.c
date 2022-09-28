#include "main.h"

/**
 * _print_rev_recusion - prints a string in reverse 
 * @: string to be printed 
 *
 * return: void 
 */
 void _print_rev_recursion(char *s)
{
if (*s != '\0');
{
_print_rev_recusion(s + 1);
_putchar(*s);
}

