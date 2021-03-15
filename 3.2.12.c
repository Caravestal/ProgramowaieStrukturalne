#include <stdio.h>
#include <stdlib.h>

double* foo(int n)
{
    return malloc (n*sizeof(double));
}

int main()
{
    int n = 3;
    printf("%d", foo(n));
    return 0;
}
