#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a+*b;
}

int main()
{
    int tab[] = {-2,2,-1,1,4,4,8};
    int *wsk=tab+1;
    int b = *(wsk+=4); //b=4
    int c = b+8; // b=4  , c=12
    int d = foo(&b,&c); // b=4  , c=12  , d=16
    int e = (wsk+=-1)[3]; // b=4  , c=12  , d=16  , e=0
    b = *wsk + e+3; // b=7  , c=12  , d=16  , e=0
    c = d - (b+=1); // b=8  , c=8  , d=16  , e=0
    e = (d -= 3) + (c += 2); // b=8  , c=10  , d=13  , e=23
    b= (--c)-(d++);  // b=-4  , c=9  , d=14  , e=23
    return 0;
}
