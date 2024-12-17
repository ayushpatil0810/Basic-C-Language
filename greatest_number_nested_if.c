#include<stdio.h>
void main()
{
    int a, b, c ;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    if (a>b)
    {
        if (a>c)
        {
            printf("A is Greatest Number.");
        }
        else printf("C is Greatest Number.");
    }
    else
    {
        if (b>c)
        {
            printf("B is Greatest Number.");
        }
    }
    
}