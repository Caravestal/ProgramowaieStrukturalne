#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%i %i", &a,&b);
    int wb1=abs(a);
    int wb2=abs(b);
    if(wb1>wb2)
        printf("%i",wb1);
    if(wb2>wb1)
        printf("%i",wb2);
    if(wb1==wb2)
        printf("%i%i", wb1, ' i ' ,wb2);
    return 0;
}
