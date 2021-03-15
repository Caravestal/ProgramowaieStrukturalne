#include <stdio.h>
#include <stdlib.h>

int* foo()
{
    return malloc(sizeof(int));
}

int main()
{
    printf("%d", foo());
    return 0;
}
