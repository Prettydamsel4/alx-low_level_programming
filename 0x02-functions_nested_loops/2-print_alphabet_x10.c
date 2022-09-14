#include  "main.h"

/**
* print_alphabet_x10 - print alphabet 10 times
* Return:void
*/

void print_alphabet_x10(void)
{
char c;
int I = 0;

while (I < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
I++;
}

}
