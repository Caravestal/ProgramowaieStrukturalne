#include <stdio.h>
#include <stdlib.h>

void foo(int n, int m)
{
    int z = n;
    n = m;
    m = z;
    printf("%i %i", n, m);
}

int main()
{
    printf("Podaj n i m:\n");
    unsigned int n,m;
    scanf("%i%i",&n,&m);
    int a = 2;
    int b = 3;
    foo(a,b);
    return 0;
}
