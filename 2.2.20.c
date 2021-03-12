#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
    if(n==1)
    {
        return 1;
    }
    return silnia(n-1) * n;
}

int main()
{
    printf("%d", silnia(3));
    return 0;
}
