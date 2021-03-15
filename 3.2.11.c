#include <stdio.h>
#include <stdlib.h>

int* foo(int n)
{
    return malloc (n*sizeof(int));
}

int main()
{
    int n;
    printf("%d", foo(n));
    return 0;
}
