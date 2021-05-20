#include <stdio.h>
#include <stdlib.h>

void duzel(char *nap)
{
    int i;
    for (i = 0; nap[i] != 0; i++)
        {
            if ((nap[i] >= 'a') && (nap[i] <= 'z'))
                nap[i] = nap[i] - 32;
        }
    nap[i] = '\0';
}

void duzel1(wchar_t *nap)
{
    int i;
    for (i = 0; nap[i] != 0; i++)
        {
            if ((nap[i] >= 'a') && (nap[i] <= 'z'))
                nap[i] = nap[i] - 32;
        }
    nap[i] = '\0';
}

int main()
{
    char napis1[] = "lama";
    wchar_t napis2[] = L"panda";

    duzel(napis1);
    duzel1(napis2);

    printf("%s\n", napis1);
    wprintf(L"%s\n",napis2);
    return 0;
}
