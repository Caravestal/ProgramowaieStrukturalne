#include <stdio.h>
#include <stdlib.h>

void foo(int *n, int *m)
{
    int z = *n;
    *n = *m;
    *m = z;
}

int main()
{
    int n;
    int m;
    printf("Podaj n i m:\n");
    scanf("%i%i",&n,&m);
    foo(&n,&m);
    printf("%d\n", n);
    printf("%d\n", m);
    return 0;
}
