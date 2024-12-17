#include <stdio.h>
void main()
{
    int num, i, j ;

    printf("Enter The Number :");
    scanf("%d", &num);

    for ( i = 1; i <=num; i++)
    {
        for ( j = 1; j <=num; j++)
        {
            printf("%d ", i*j);
        }
        
        printf("\n");
    }
    

}