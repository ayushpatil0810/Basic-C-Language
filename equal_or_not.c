#include<stdio.h>
int main()
{
    int a, b;

    printf("Enter The Value Of 'a' :");
    scanf("%d", &a);
    printf("Enter The Value Of 'b' :");
    scanf("%d", &b);

    if (a==b)
    {
        printf("Both Numbers Are Equal.");
    }
    else printf("Both The Numbers Are not Equal.");
    return 0;

}