#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,d,e,f;
    scanf("%f %f %f %f %f %f ",&a,&b,&c,&d,&e,&f);
    float ag,ax,ay;
    ag = a*c-b*d;
    ax = c*e-b*f;
    ay = a*f-c*d;
    if(ag != 0)
    {
        printf("x=%f, y=%f", ax/ag, ay/ag);
    }
    else
    {
        if(ax == 0 && ay == 0)
        {
            printf("Nieskonczenie wiele rozwiazan");
        }
        else
            printf("Brak rozwiazan");
    }
	return 0;
}
