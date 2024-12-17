#include <stdio.h>

void main()
{
    float perimeter, area, length, breadth;

    printf("Enter The Length : ");
    scanf("%f", &length);

    printf("Enter The Breadth : ");
    scanf("%f", &breadth);

    perimeter = 2*(length*breadth);
    area = length*breadth;

    printf("Perimeter = %f\n", perimeter);
    printf("Area = %f", area);

}