//bez string.h
#include <stdio.h>
#include <stdlib.h>

void duze(char *nap)
{
    int i;
    for (i = 0; nap[i] != 0; i++)
        {
            if ((nap[i] >= 'a') && (nap[i] <= 'z'))
                nap[i] = nap[i] - 32;
        }
    nap[i] = '\0';
}

void duze1(wchar_t *nap)
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
    char napis1[] = "PandA";
    wchar_t napis2[] = L"BaNaN";

    duze(napis1);
    duze1(napis2);

    printf("%s\n%s\n", napis1);
    wprintf(L"%s\n%s\n",napis2);
    return 0;
}

//jest string.h bez wchar_t
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void duze(char *napis)
{
    strupr(napis);
}

int main()
{
    char nap[] ="BaNaN";
    duze(nap);
    printf("%s", nap);
    return 0;
}
