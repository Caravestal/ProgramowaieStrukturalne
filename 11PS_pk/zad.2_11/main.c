#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int n)
{
    int wynik = 0;
    for(int i=0; i<n; i++)
    {
        if(i%2==1)
        {
           wynik += i;
        }
    }
    return wynik;
}

int main()
{
    unsigned int a = 1; // 0
    unsigned int b = 5; // 4 = 1 + 3
    unsigned int c = 12; // 36 = 1 + 3 + 5 + 7 + 9 + 11

    printf("%i\n", foo(a));
    printf("%i\n", foo(b));
    printf("%i\n", foo(c));

    return 0;
}
