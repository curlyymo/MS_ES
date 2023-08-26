#include <stdio.h>
#include <stdlib.h>
void swap(float *a, float *b);
int main()
{
    float x;
    float y;
    printf("Please enter the first number:");
    scanf("%f",&x);
    printf("Please enter the second number:");
    scanf("%f",&y);
    printf("before swap: \t x= %.2f , \t y =%.2f\n",x,y);
    swap(&x, &y);
    printf("after swap: \t x = %.2f , \t y = %.2f\n", x, y);
    return 0;
}
void swap (float *a, float *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
