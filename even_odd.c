#include <stdio.h>

void main ()
{
    int num, reminder;

    printf("Enter The Number :");
    scanf("%d", num);

    reminder = num%2;

    if (reminder == 0)
    {
        printf("Number Is Even.");
    }
    else printf("Number Is Odd.");
}