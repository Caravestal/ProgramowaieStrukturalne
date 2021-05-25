#include <stdio.h>
#include <stdlib.h>

int** foo(int n, int m)
{
    int ** t = malloc(n*sizeof(int*));
    int i;
    for(i=0; i<n; i++)
        t[i] = malloc(m*sizeof(int));
    return t;
}

int main()
{
    printf("%p", foo(3, 4));
    return 0;
}
