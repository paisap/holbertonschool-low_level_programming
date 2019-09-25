#include <stdio.h>
#include <stdlib.h>

int main(void)
{
double x,y,z,cont;

x=0;
y=1;


for (cont=1;cont<=50;cont=cont+1)
{
z=x+y;
printf("%d,",z);
x=y;
y=z;
}

printf("\n");
return (0);
}

