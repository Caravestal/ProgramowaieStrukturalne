#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Podaj n i m:\n");
    unsigned int n,m;
    scanf("%i%i",&n,&m);
    int wynik=1;
    for(int i=n;i<=m;i++)
    {
        wynik*=i;
    }
    printf("%i",wynik);

    return 0;
}
