 #include<stdio.h>
#include<conio.h>
void main()
{

 int i;
start:

   for(i=0; i<=255; i++)
   {


           printf("%d\t=%c\t",i,i);

   }

    getch();
    goto start;
}