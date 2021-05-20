#include <stdio.h>
#include <stdlib.h>

int dlugosc1(char *napis)
{
    int temp = 0;
    while(*(napis++))
    {
        temp++;
    }
    return temp;
}

int dlugosc2(wchar_t *napis)
{
    int temp = 0;
    while(*(napis++))
    {
        temp++;
    }
    return temp;
}

int main()
{
    char napis[] = "lama";
    wchar_t napis2[5] = L"lama";
    printf("%d\n", dlugosc1(napis));
    printf("%d", dlugosc2(napis2));
    return 0;
}
