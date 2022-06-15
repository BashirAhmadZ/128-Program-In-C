#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
abc:
	textcolor(random(16));
	textbackround(random(16));
    cprintf("Hello world!\n");
    goto abc;
}
