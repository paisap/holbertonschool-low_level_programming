#include "holberton.h"
void jack_bauer(void)
{
char a, b, c, d, x;

for (a = 48; a < 51; a++)
{
if (a == 50)
{
x = 52;
}
else
{
x = 58;
}
for (b = 48; b < x; b++)
{
for (c = 48; c < 54; c++)
{
for (d = 48; d < 58; d++)
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
_putchar('\n');
}
}
}
}
}
