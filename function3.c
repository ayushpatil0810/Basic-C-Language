#include<stdio.h>
#include<math.h>

int area_rectangle(int length, int breadth);
int area_circle(int radius);
int area_square(int side);

void main()
{
    int length, breadth, side ;
    float radius;

    printf("Length Of Rectangle : ");
    scanf("%d", &length);
    printf("Breadth Of Rectangle : ");
    scanf("%d", &breadth);
    printf("%d\n",area_rectangle(length, breadth));

    printf("EnterThe Radius Of The Circle : ");
    scanf("%f", &radius);
    printf("%f\n",area_circle(radius));

    printf("Enter The Size Of A Square : ");
    scanf("%d", &side);
    printf("%d\n",area_square(side));
}

int area_rectangle(int length, int breadth)
{
    return length*breadth;
}

int area_circle(int radius)
{
    return 3.14*pow(radius,2);

}

int area_square(int side)
{
    return pow(side,2);
}