#include <stdio.h>

int main(void)
{
    int n, i;
    float v[5], u[5];

    v[0] = 2.0;
    v[1] = 3.0;
    v[2] = 4.0;
    v[3] = 5.0;
    v[4] = 6.0;

    n = 5;

    for (i = 0; i < n; i++)
    {
        u[i] = v[i] * (i + 1);
    }

    printf("%f, %f\n", u[1], u[3]);
}