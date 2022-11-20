#include <stdio.h>

int main()

{

    union values

    {

        unsigned char a;

        unsigned char b;

        unsigned int  c;

    };

 

    union values val;

    val.a=1;

    val.b=2;

    val.c=300;

 

    printf("%d,%d,%d",val.a,val.b,val.c);

    return 0;

}
