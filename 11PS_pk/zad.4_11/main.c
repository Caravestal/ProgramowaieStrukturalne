#include <stdio.h>
#include <stdlib.h>

float foo(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return foo(n-2) + (1/foo(n-1));
}

int main()
{
    int a = 2; // an=2
    int b = 4; // an=2,6667
    printf("%f\n", foo(a));
    printf("%f\n", foo(b));
    return 0;
}
