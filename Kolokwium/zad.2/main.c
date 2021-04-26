#include <stdio.h>
#include <stdlib.h>

float foo(int n)
{
    float wynik=0;
    for(float i=1; i<=n; i++)
    {
        float temp = i/(i+1);
        wynik = wynik + temp;
    }
    return wynik;
}

int main()
{
    printf("%f\n", foo(3));
    printf("%f\n", foo(2));
    printf("%f", foo(1));
    return 0;
}
