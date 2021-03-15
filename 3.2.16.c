#include <stdio.h>
#include <stdlib.h>

int foo(int const *w, int *s)
{
    return *s = *w;

}

int main()
{
    const int n = 3;
    int k = 2;
    printf("%d", foo(&n,&k));
    return 0;
}
