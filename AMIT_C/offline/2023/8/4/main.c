#include <stdio.h>
#include <stdlib.h>
int func_add1(int a, int b);
int func_add2(int a, int b);
int func_add3(int a, int b);
int func_add4(int a, int b);
int func_add5(int a, int b);
int main()
{

    int (*ptr[5])(int ,int)={&func_add1,&func_add2,&func_add3,&func_add4,&func_add5};
    //int (*ptr1)(int,int)=&func_add1;
    //int (*ptr2)(int,int)=&func_add2;
    //int (*ptr3)(int,int)=&func_add3;
    //int (*ptr4)(int,int)=&func_add4;
    //int (*ptr5)(int,int)=&func_add5;

    ptr[0](5,4);
    ptr[1](5,4);
    ptr[2](5,4);
    ptr[3](5,4);
    ptr[4](5,4);
    return 0;
}
int func_add1(int a, int b)
{
    printf("We are at function 1\n");
    return a+b;

}

int func_add2(int a, int b)
{
    printf("We are at function 2\n");
    return a+b;
}
int func_add3(int a, int b)
{
    printf("We are at function 3\n");
    return a+b;
}
int func_add4(int a, int b)
{
    printf("We are at function 4\n");
    return a+b;
}
int func_add5(int a, int b)
{
    printf("We are at function 5\n");
    return a+b;
}

