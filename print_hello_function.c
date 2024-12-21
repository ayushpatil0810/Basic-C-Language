#include<stdio.h>


void printhello()
{
    printf("Hello\n");
}

void printworld();
void printworld()
{
    printf("World !");
}

int main()
{
    printhello();
    printworld();
}



