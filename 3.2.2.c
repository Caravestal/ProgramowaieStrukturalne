#include <stdio.h>
#include <stdlib.h>

int* foo(int*a,int*b)
{
    if (*a<*b)
    {
        return a;
    }
    return b;
}

int main()
{
    int x=3,y=7;
    printf("%d %p\n",x,&x);
    printf("%d %p\n",y,&y);
    printf("%p\n",foo(&x,&y));
    return 0;
}
