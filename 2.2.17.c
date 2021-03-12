#include <stdio.h>
#include <stdlib.h>

int g;

void wys()
{
    g++;
    printf("%d\n", g);
}

int main()
{
    wys();
    wys();
    wys();
    wys();
    return 0;
}
