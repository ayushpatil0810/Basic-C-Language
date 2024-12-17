#include <stdio.h>
void add()
{
    float num1, num2, sum ;

    printf("Enter The Value Of First Number :");
    scanf("%f", &num1);

    printf("Enter The Value Of Second Number :");
    scanf("%f", &num2);
    
    sum = num1 + num2;

    printf("The Sum Of Both The Numbers Is : %f", sum);

}