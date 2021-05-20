#include <stdio.h>
#include <stdlib.h>

void kopiujn(char *nap1, char *nap2, int n)
{
    int i;
    for (i = 0; i < n; i++)
        {
            if (nap1[i] != '\0')
                nap2[i] = nap1[i];
            else
                break;
        }
    nap2[i] = '\0';
}

void kopiujn2(wchar_t *nap1, wchar_t *nap2, int n)
{
    int i;
    for (i = 0; i < n; i++)
        {
            if (nap1[i] != '\0')
                nap2[i] = nap1[i];
            else
                break;
        }
    nap2[i] = '\0';
}

int main()
{
    char napis1[] = "lama";
    char napis2[] = "baba";
    wchar_t napis3[] = L"lama";
    wchar_t napis4[] = L"baba";

    kopiujn(napis1,napis2,3);
    kopiujn2(napis3,napis4,3);

    printf("%s\n%s\n", napis1, napis2);
    wprintf(L"%s\n%s\n",napis3,napis4);
    return 0;
}
