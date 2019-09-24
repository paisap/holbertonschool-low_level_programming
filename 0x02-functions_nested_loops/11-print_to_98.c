#include <stdio.h>

/**
 * print_to_98 - print the number 98
 * @n: First operand
 *
*/
void print_to_98(int n)
{

if (n < 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
}
else
printf("%d, ", n);
}
printf("\n");
}
else
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
}
else
printf("%d, ", n);
}
printf("\n");

}

