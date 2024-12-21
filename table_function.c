#include <stdio.h>

int num;

void table();

void main()
{

    printf("Enter The Number : ");
    scanf("%d", &num);
    table(num);


}

void table(int number)
{
    int i;

    for ( i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num*i );
    }
    
}