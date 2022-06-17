#include <stdio.h>
#include <stdlib.h>

void main()
{
        int a=4,b=5;
        a=a++ + ++b;
        b=++a+b++;
    printf("a=%d\n    b=%d\n",a,b);

}
