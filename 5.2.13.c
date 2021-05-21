#include <stdio.h>
#include <stdlib.h>

void wytnijtm(char *nap1, char *nap2)
{
    int i, j;
    for (i = 0, j = 0; nap1[i] != 0; i++)
        {
            if (nap1[i] != nap2[i])
                {
                    if(j<i)
                        nap1[j] = nap1[i];
                    j++;
                }
        }
        nap1[j] = 0;
}

void wytnijtm1(wchar_t *nap1, wchar_t *nap2)
{
    int i, j;
    for (i = 0, j = 0; nap1[i] != 0; i++)
        {
            if (nap1[i] != nap2[i])
                {
                    if(j<i)
                        nap1[j] = nap1[i];
                    j++;
                }
        }
        nap1[j] = 0;
}

int main()
{
    char napis1[] = "lama";
    char napis2[] = "baba";
    wchar_t napis3[] = L"lama";
    wchar_t napis4[] = L"baba";

    wytnijtm(napis1,napis2);
    wytnijtm1(napis3,napis4);

    printf("%s\n%s\n", napis1, napis2);
    wprintf(L"%s\n%s\n",napis3,napis4);
    return 0;
}
