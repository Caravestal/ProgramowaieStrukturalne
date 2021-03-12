#include <stdio.h>
#include <stdlib.h>

void silnia(int n)
{
    int wynik = 1;
    for(int i=1; i<=n; i++)
    {
        wynik*=i;
    }
    printf("%i", wynik);
}

int main()
{
    int n;
    printf("Podaj nieujemna liczbe n:\n");
    scanf("%i", &n);
    silnia(n);
    return 0;
}
