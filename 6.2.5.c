//6.2.1
#include <stdio.h>
#include <stdlib.h>

int*** foo(int n, int m, int l)
{
    int *** t = malloc(n*sizeof(int**));
    int i;
    for(i=0; i<n; i++)
    {
        *(t + i) = malloc(m*sizeof(int*));
        int j;
        for(j=0; j<m; j++)
        {
            *(*(t+i)+j) = malloc(l*sizeof(int));
        }

    }
    return t;
}

int main()
{
    printf("%p", foo(3, 4, 2));
    return 0;
}
