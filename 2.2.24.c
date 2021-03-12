#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if(n==1)// w momencie kiedy n zejdzie do 1 w domyśle dodaje n0 czyli 1+1=2 dlatego return 2
    {
        return 2; 
    }
    return foo(n-1) + n;
}

int main()
{
    printf("%d", foo(3));
    return 0;
}
