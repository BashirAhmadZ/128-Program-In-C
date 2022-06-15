#include<stdio.h>

#include<limits.h>
int main()
{
    printf("THE NUMBER OF BITS IN A BYTE %d\n",CHAR_BIT);

    printf("THE MINIMUM VALUE OF SIGNED CHAR=%d\n", SCHAR_MIN);
    printf("THE MAXIMUM VALUE OF SIGNED CHAR=%d\n", SCHAR_MAX);
    printf("THE MAXIMUM VALUE OF UNSIGNED CHAR=%d\n", UCHAR_MAX);

    printf("THE MINIMUM VALUE OF short int=%d\n", SHRT_MIN);
    printf("THE MAXIMUM VALUE OF SORT INT=%d\n", SHRT_MAX);

    printf("THE MINIMUM VALUE OF INT      =%d\n", INT_MIN);
    printf("THE MAXIMUM VALUE OF INT      =%d\n", INT_MAX);
    printf("THE MINIMUM VALUE OF CHAR=%d\n", CHAR_MIN);
    printf("THE MAXIMUM VALUE OF CHAR=%d\n", CHAR_MAX);
    printf("THE MINIMUM VALUE OF LONG=%d\n", LONG_MIN);
    printf("THE MAXIMUM VALUE OF LONG=%d\n", LONG_MAX);
    return 0;
}