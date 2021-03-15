#include <stdio.h>
#include <stdlib.h>

int* foo()
{
    int *w;
    return w;
}

int main()
{
    printf("%d", foo());
    return 0;
}
