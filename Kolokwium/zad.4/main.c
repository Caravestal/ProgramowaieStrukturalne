#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m)
{
    if(n==0)
        return 2*m;
    if(n >= m > 0)
        return foo(m-1,n-1) + m - n;
    return foo(m,n) + 1;
}

int main()
{
    printf("%i\n", foo(0,3));
    printf("%i\n", foo(4,3));
    printf("%i\n", foo(3,4));
    return 0;
}
