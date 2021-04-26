#include <stdio.h>
#include <stdlib.h>

int *foo(int n, int *tab1)
{
    for(int i=0; i<2*n; i++)
    {
        if(*(tab1+i)%2==0)
            return (tab1+i);
    }
    return tab1;
}

int main()
{
    const int n = 2;
    int *tab1 = malloc(2 * n * sizeof(int));
    *(tab1)=1;
    *(tab1 + 1)=2;
    *(tab1 + 2)=3;
    *(tab1 + 3)=4;
    int *tab2 = malloc(2 * n * sizeof(int));
    *(tab2)=1;
    *(tab2 + 1)=3;
    *(tab2 + 2)=5;
    *(tab2 + 3)=6;
    printf("%p\n", foo(n,tab1));
    printf("%p\n", foo(n,tab2));
    return 0;
}
