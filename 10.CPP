#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a=9,b;
        b=a-- + a++ + --a;
    printf("a=%d\n    b=%d\n",a,b);

}