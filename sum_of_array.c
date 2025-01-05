#include<stdio.h>

void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 0, sum = 0;

    for ( i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);
    
}
