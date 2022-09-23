#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an intiger ;
 * @: intiger to be printed;
 *
 */

void print_number (int n)
{
unsigned int n1;
if (n<0)
{
n1=-n
_putcar('-')
}
else 
{
n1=n;
}
if (n1 / 10)
print_number(n1 /10);
_putchar(n1 % 10 ) +'0');
}
