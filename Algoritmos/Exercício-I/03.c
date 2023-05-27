#include <stdio.h>

int main(void)
{
    float x1, x2;
    float res;

    printf("digite um número positivo: ");
    scanf("%f", &x1);

    printf("digite outro número positivo: ");
    scanf("%f", &x2);

    if (x1 > x2)
    {
        res = (x1 - x2) / x1;
        printf("%f\n", res);
    }
    else
    {
        res = (x2 - x1) / x2;
        printf("%f\n", res);
    }

    return 0;
}