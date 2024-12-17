#include <stdio.h>

void main()
{
    float num;

    printf("Enter The Number : ");
    scanf("%f", &num);

    if (num>0)
    {
        printf("%f is a Positive Number.", num);
    }
    else if (num<0)
    {
        printf("%f is Negative Number.", num);
    }
    else printf("The Number Is Zero.");
    
    
}