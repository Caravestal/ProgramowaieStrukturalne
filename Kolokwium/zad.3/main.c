#include <stdio.h>
#include <stdlib.h>

double foo(double *const wsk1, const double *wsk2)
{
    double wynik = wsk1 * wsk2;
    return wynik;
}

int main()
{
    int i=2;
    int j=4;
    double *wsk1;
    double *wsk2;
    const double *wsk2=&j;
    double *const wsk1=i;
    printf("%lf\n", foo(wsk1,wsk2));
    return 0;
}
