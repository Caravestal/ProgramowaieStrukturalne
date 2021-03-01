#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Podaj n\n");
    unsigned int n;
    int wynik=0;
    scanf("%i",&n);
    for(int i=0;i<=n;i++)
    {
        wynik+=i*i;
    }
    printf("%i",wynik);

    return 0;
}
