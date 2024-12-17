#include<stdio.h>
void main()
{
    int num, i, sum;

    printf("Enter The Number: ");
    scanf("%d", &num);

    for ( i = 0; i <= num; i++)
    {
        sum  = sum + i*i;
    }
    printf("The Sum Of The Squares the numbers upto %d is %d", num, sum);
    
}