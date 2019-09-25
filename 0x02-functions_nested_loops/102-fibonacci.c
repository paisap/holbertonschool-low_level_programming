#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long long int x, y, z, cont;

x = 0;
y = 1;


for (cont = 1; cont <= 50; cont = cont+1)
{
if (cont == 50)
{
z = x + y;
printf("%lli", z);
x = y;
y = z;
}
else
{
z = x + y;
printf("%lli, ", z);
x = y;
y = z;
}
}
printf("\n");
return (0);

}
