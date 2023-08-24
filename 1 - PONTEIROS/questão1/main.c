#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float b;
    char c;

    int *x;
    float *y;
    char *z;

    printf("A: %d, B: %.1f, C: %c", a, b, c);

    x = &a;
    y = &b;
    z = &c;

    *x = 10;
    *y = 10.5;
    *z = 'a';

    printf("A: %d, B: %.1f, C: %c", a, b, c);
    return 0;
}
