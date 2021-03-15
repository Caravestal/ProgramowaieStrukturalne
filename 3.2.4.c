#include <stdio.h>
#include <stdlib.h>

void foo(int *a,int *b)
{
    int z;
    if(*a<*b)
    {
        z = *a;
        *a = *b; *b = z;
        printf("%d %d\n", *a,*b);
    }
    else
        printf("%d %d\n", *a,*b);
}

int main()
{
    int x=2,y=9;
    int z;
    foo(&x,&y);
    return 0;
}
