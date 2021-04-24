#include <stdio.h>
#include <stdlib.h>

double *foo()
{
    double *a = malloc(2* sizeof(double));
    *(a) = 5.4;
    *(a+1) = -4.2;
    return a;

}

int main()
{
    printf("%lf\n", *(foo()));
    printf("%lf", *(foo()+1));
    return 0;
}
