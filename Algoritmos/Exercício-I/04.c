#include <stdio.h>

int main(void)
{
    int x, i, t, e;
    float a;

    printf("Digite um número: ");
    scanf("%i", &x);

    i = 0;
    t = 0;

    while (i < x)
    {
        printf("Digite um número: ");
        scanf("%i", &e);

        t += e;
        i++;
    }

    a = (float)t / x;

    printf ("%i %f\n", i, a);
}