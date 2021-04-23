#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int foo(int n, float *tab1, float *tab2)
{
    for(int i=0; i<=n; i++)
    {
        if(fabs(*(tab1+i)-*(tab2+i))<=0.1)
        {
           return 1;
        }
        return 0;
    }
}

int main()
{
    int n = 2;
    float *tab1 = malloc(n * sizeof(float));
    float *tab2 = malloc(n * sizeof(float));
    *(tab1) = 4.00001;
    *(tab1+1) = 5.6;
    *(tab2) = 4.2;
    *(tab2+1)= 5.5;
    printf("%d", foo(n,tab1,tab2));

    return 0;
}
