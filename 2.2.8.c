#include <stdio.h>
#include <stdlib.h>

void pierwiastek(int n)
{
    int wynik;
    for(int i=1; i<=n; i++)
    {
        wynik= i*i;
        if (wynik == n)
        {
            printf("%i", i);
        }
    }
}

int main()
{
    int n;
    printf("Podaj nieujemna liczbe n:\n");
    scanf("%i", &n);
    pierwiastek(n);
    return 0;
}
