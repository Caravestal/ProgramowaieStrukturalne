#include <stdio.h>
#include <stdlib.h>

void foo(int *w, int z)
{
    *w = z;
}

int main()
{
    int n=2;
    foo(&n, 9);
    printf("%d", n);
    return 0;
}
