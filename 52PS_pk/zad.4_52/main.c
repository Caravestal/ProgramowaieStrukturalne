#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if(n==0 || n==1)
        return 1;
    if(n%3==0 && n>0)
        return foo(n/3 -1);
    if(n%3==1 && n>0)
        return foo(3*n) + 1;
    if(n%3==2 && n>=0)
        return 5;
}

int main()
{
    printf("%i\n", foo(2)); //5
    printf("%i\n", foo(3)); //1
    printf("%i\n", foo(4)); //2
    printf("%i\n", foo(5)); //5
    return 0;
}
