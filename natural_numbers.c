#include<stdio.h>
void main()
{
    int i = 1, n ;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

}