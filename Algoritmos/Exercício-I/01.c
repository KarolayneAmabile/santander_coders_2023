#include <stdio.h>

int main(void)
{
    float a, b;
    printf("digite um número: ");
    scanf("%f", &a);

    printf("digite um número: ");
    scanf("%f", &b);

    float c = a * b;
    printf("a * b = %f", c);
}