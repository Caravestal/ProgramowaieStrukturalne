#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float pote(int i, int m)
{
    float t = i;
    for(int j = 2; j<=m; j++)
    {
        t = sqrt(t);
    }
    return t;
}

float dod(int m, int n)
{
    float w;
    for(int i = 0; i<=n; i++)
    {
        w = w + pote(i, m);
    }
    return w;
}

int main()
{
    printf("%f", dod(2, 3));
    return 0;
}
