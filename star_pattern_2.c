#include <stdio.h>

void main()
{
    int a, i, j = 1 ;

    printf("Enter The Number :");
    scanf("%d", &a);

    for (i = 1; i<=a; i++ )
    {
        for (j = 1; j<=i; j++)
        printf("* ");
        printf("\n");
    }


}