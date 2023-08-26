#include <stdio.h>
#include <stdlib.h>
typedef struct number
{
    double rel;
    double img;
}complex;
int main()
{
 complex num_1;
 complex num_2;
 complex sum;
 printf("Please enter the first real number and the first imaginary number \n");
 scanf("%lf %lf",&num_1.rel,&num_2.img);

 printf("Please enter the second real number and the second imaginary number \n");
 scanf("%lf %lf",&num_2.rel,&num_2.img);

 sum.rel=num_1.rel+num_2.rel;
 sum.img=num_1.img+num_2.img;
 printf("Sum: %.2lf+%.2lfi\n", sum.rel,sum.img);


    return 0;
}
