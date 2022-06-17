#include <stdio.h>
#include <stdlib.h>

void main()
{
        int a=3;

        printf("a=%d\n",a++ + ++a);
printf("a=%d\n",++a + a++);
printf("a=%d\n",a++ + a++);
printf("a=%d\n",++a + ++a);
printf("a=%d\n",a);

}