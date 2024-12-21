#include <stdio.h>

int Indian();
int French();

int main()
{
    int a;
    printf("[1] Indian\n");
    printf("[2] French\n");
    printf("Enter The Serial No: \n");
    scanf("%d", &a);

    if(a == 1)
    {
        Indian();
    }
    else if(a == 2)
    {
        French();
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}

int Indian()
{
    printf("Namaste!\n");
    return 0;
}

int French()
{
    printf("Bonjour!\n");
    return 0;
}
