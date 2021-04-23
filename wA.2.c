#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if(n==1 || n==0)
    {
        return 2;
    }
    if(n%2==0 && n>0)
    {
        return foo(n-1) + n;
    }
    if(n%2==1 && n>0)
    {
        return 2 * foo(2*n) - n;
    }
}

int main()
{
    printf("%d", foo(3));
    return 0;
}
