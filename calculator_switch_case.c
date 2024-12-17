#include<stdio.h>

void main()
{
    float a, b, sum, product, difference, division;
    int choice;

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");

    printf("Enter Choice : ");
    scanf("%d", &choice);
    
    switch (choice)
    {
    case 1:
        printf("Enter a : ");
        scanf("%f", &a);
        printf("Enter b : ");
        scanf("%f", &b);
        sum = a + b;
        printf("a + b = %f\n", sum);
        break;

    case 2:
        printf("Enter a : ");
        scanf("%f", &a);
        printf("Enter b : ");
        scanf("%f", &b);
        difference = a - b;
        printf("a - b = %f\n", difference);
        break;

    case 3:
        printf("Enter a : ");
        scanf("%f", &a);
        printf("Enter b : ");
        scanf("%f", &b);
        product = a * b;
        printf("a * b = %f\n", product);
        break;
    
    case 4:
        printf("Enter a : ");
        scanf("%f", &a);
        printf("Enter b : ");
        scanf("%f", &b);
        division = a / b;
        printf("a / b = %f\n", division);
        break;

    default:
        printf("Enter valid inputs.\n");
        main();
        break;
    }
}
