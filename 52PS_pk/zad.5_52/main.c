#include <stdio.h>
#include <stdlib.h>

int foo(int n, int *tab1, int *tab2)
{
    int wynik = 0;
    for(int i=0; i<=n; i++)
    {
        if(*(tab1+i) == *(tab2+i))
        {
            wynik += 1;
        }
    }
    return wynik;
}

int main()
{
    int n = 5;
    int *tab1 = malloc(n * sizeof(int));
    int *tab2 = malloc(n * sizeof(int));
    *(tab1) = 2;
    *(tab1 + 1) = 4;
    *(tab1 + 2) = -2;
    *(tab1 + 3) = 3;
    *(tab1 + 4) = 5;
    *(tab2) = 2;
    *(tab2 + 1) = 0;
    *(tab2 + 2) = -2;
    *(tab2 + 3) = 3;
    *(tab2 + 4) = 1;
    printf("%i\n" ,foo(n,tab1,tab2));
    return 0;
}
