#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
double x, y, z, s;
int i, g;

x = 0;
y = 1;


for (i = 1; i <= 50 && z < 4000000; i++)
{
z = x + y;
g = z;
if ((g % 2) == 0)
{
s = s + z;
x = y;
y = z;
}
else
{
x = y;
y = z;
}
}
printf("%.f\n", s);
return (0);
}
