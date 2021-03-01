#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Podaj n i m:\n");
    unsigned int n,m;
    scanf("%i%i",&n,&m);
    while(n!=m)
    {
        if(n>m)
            n=n-m;
        else
            m=m-n;
    }
    printf("nwd = %i",m);
    return 0;
}
