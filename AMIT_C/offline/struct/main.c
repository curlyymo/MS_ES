#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
    char a;
    char b;
    char c;
    char d;



}student_t;

int main()
{

    int x=0;
    student_t*ptr=&x;
ptr->a=10;
ptr->b=1;
printf("%d",x);


    return 0;
}
