#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void zero(int n, int tab[]){
    for(int i=0; i<n; i++){
        tab[i]=0;
    }
}

void kolejne(int n, int tab[])
{
    for(int i=0; i<n; i++){
        tab[i]=i;
    }
}

void podwaja(int n, int tab[])
{
     for(int i=0; i<n; i++){
        tab[i]*=2;
    }
}

void wb_pier(int n,int tab[])
{
    for(int i=0; i<n; i++){
        tab[i]=abs(tab[i]);
    }
}

void wypisz(int n, int tab[]){
    for(int i=0;i<n;i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}
int main()
{
    int n=5, tab1[]={1,2,3,4,5};
    wypisz(n,tab1);

    zero(n,tab1);
    wypisz(n,tab1);

    kolejne(n,tab1);
    wypisz(n,tab1);

    podwaja(n,tab1);
    wypisz(n,tab1);

    int tab2[] = {-1,-2,-3};
    wypisz(3,tab2);
    wb_pier(3,tab2);
    wypisz(3,tab2);
    return 0;
}
