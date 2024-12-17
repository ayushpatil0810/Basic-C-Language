#include<stdio.h>

void main()
{
    int num, i , j =0 ; 

    printf("Enter The Number : ");
    scanf("%d", num);

    for ( i = 1; i <= num; i++)
    {
        j  = j + i ;
    }
    printf("%d", j);
    
}