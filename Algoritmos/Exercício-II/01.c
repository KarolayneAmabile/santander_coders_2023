#include <stdio.h>

int main(void)
{
    int t = 1;
    int m = 5;
    int c = 10;

    c = c * (1 + t);
    while (t < m)
    {
        t += 1;
        c = c * (t + 1);
    }

    printf("%i\n", c);
}