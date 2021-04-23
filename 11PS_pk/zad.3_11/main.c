#include <stdio.h>
#include <stdlib.h>

float *foo()
{
    float *a = malloc(sizeof(float));
    float *b = malloc(sizeof(float));
    *a = 2.8;
    *b = 3.2;
    return b;
}

int main()
{
    printf("%p", foo());
    return 0;
}
