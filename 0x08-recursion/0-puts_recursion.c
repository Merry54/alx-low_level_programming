#include "main.h"

/**
* _puts_recusion - prints's a string followed by a new line 
* @s: string to beb printed 
*
* return:void 
*/

void _puts_recusion(char *s)
{
if (*s =='\0')
{
_putchar('\n');
}
else
{
_puchar(s[0]);
_puts_recusion(s+1);
}
}
