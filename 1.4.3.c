#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Podaj n, m i k\n");
    int n,m,k;
    scanf("%i%i%i",&n,&m,&k);
    for(int i=0;i<=k;i++)
    {
        int wynik=n*i;
        if (wynik>m)
            printf("%i\n",wynik);
        if(wynik>=k)
        {
            break;
        }
    }

    return 0;
}
