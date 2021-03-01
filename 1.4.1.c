#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Podaj n i m\n");
    int n,m;
    scanf("%i%i",&n,&m);
    for(int i=0;i<=m;i++)
    {
        int wynik=n*i;
        if(wynik>m)
        {
            break;
        }
        printf("%i\n",wynik);
    }

    return 0;
}
