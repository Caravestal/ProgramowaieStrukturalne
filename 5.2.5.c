#include <stdio.h>
#include <stdlib.h>

void przepisz(char napis1[],char napis2[])
{
    int i=0;
    while(*(napis1+i)!=0){
        *(napis2+i)=*(napis1+i);
        i++;
    }
    *(napis2+i)='\0';
}

void przepisz2(wchar_t napis1[],wchar_t napis2[])
{
    int i=0;
    while(*(napis1+i)!=0){
        *(napis2+i)=*(napis1+i);
        i++;
    }
    *(napis2+i)='\0';
}

int main()
{
    char nap[] = "Hello";
    wchar_t wnap[] = L"Hello";
    char napis[]= "HelloWor";
    wchar_t napis2[]=L"World";
    przepisz(nap,napis);
    przepisz2(wnap,napis2);
    printf("%s\n",napis);
    wprintf(L"%s\n\n",napis2);
    return 0;
}
