#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f;
    printf("Jakie pole policzyc? Kwadrat = 1, Trojkat = 2, Prostokat = 3 \n");
    scanf("%i", &f);
    switch(f)
    {
    case 1:
        {
            int a;
            printf("Podaj wartosc a: ");
            scanf("%i", &a);
            int wyn = a*a;
            printf("%i", wyn);
        }
    case 2:
        {
            float x, h;
            printf("Podaj a i h: ");
            scanf("%f %f", &x, &h);
            float wyn = 0.5*x*h;
            printf("%f", wyn);
        }
    case 3:
        {
            int z, q;
            printf("Podaj a i b: ");
            scanf("%i %i", &z, &q);
            int wynik = z*q;
            printf("%i", wynik);
        }
    }
return 0;
}
