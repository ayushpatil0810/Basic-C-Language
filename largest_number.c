#include <stdio.h>

int main()
{
    int a, b, c ;

    printf("Enter The Value Of 'a' :");
    scanf("%d", &a);;
    
    printf("Enter The Value Of 'b' :");
    scanf("%d", &b);

    printf("Enter The Value Of 'c' :");
    scanf("%d", &c);

    if (a>b & a>c)
    {
        printf("%d is Largest Number", a);
    }
    else if (b>a & b>c)
    {
        printf("%d is the Largest Number", b);
    }
    else printf("%d is Largest Number", c);
    
    return 0;
}