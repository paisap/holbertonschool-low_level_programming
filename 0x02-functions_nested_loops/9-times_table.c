#include "holberton.h"
void times_table(void)
{
int a, b, d;

b = 0;
while(b <= 9){
for (a = 0; a < 10; a++)
{
_putchar(b + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
b++;
