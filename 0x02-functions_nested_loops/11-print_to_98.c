void print_to_98(int n)
{
int a, b;

if (n < 98)
{
for (; n <= 98; n++)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
else
{
for (; n >= 98; n++)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
}

