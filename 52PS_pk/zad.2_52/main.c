#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m, int k)
{
    int wynik = 0;
    for(int i=m; i<k; i++)
    {
        if(i%n==0 && i!=m)
            {
                wynik += i;
            }
    }
    return wynik;
}

int main()
{
    printf("%i\n", foo(2,4,10)); // n,m,k wielokrotnoœci n wiêksze ni¿ m mniejsze ni¿ k: 6+8=14
    printf("%i\n", foo(3,9,32)); // 12+15+18+21+24+27+30=147
    return 0;
}
