#include <stdio.h>

int main(void)
{
    int a = 30;
    int b = 20;
    int c = a + b;

    printf("%i\n", c);

    b = 10;
    printf ("%i %i\n", b, c);

    c = a + b;
    printf ("%i %i %i\n", a, b, c);
}