#include "main.h"

/**
* _puts_recusion - prints's a strinng followed by a new line 
* @s: string to beb printed 
*
* return:void 
*/

void _puts_recusion(chaar *s)
{
if (!s || !*s)
{
_putchar('\n');
returns ;
}
{
_puchar(*s);
_puts_recusion(s+1);
}
}
