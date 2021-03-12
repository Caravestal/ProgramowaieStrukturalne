#include <stdio.h>
#include <stdlib.h>

void potega(int n)
{
    int wynik = 1;
    for(int i=1; i<=n; i++)
    {
        wynik*=2;
    }
    printf("%i", wynik);
}

int main()
{
    int n;
    printf("Podaj nieujemna liczbe n:\n");
    scanf("%i", &n);
    potega(n);
    return 0;
}
