#include <stdio.h>
#include <stdlib.h>

int func_Add(int a, int b);
int func_Sub(int a, int b);
int func_Mul(int a, int b);
float func_div(int a, int b);
void hi(void);
int main()
{
int Add_Variable=0;
int Sub_Variable=0;
int Mul_Variable=0;
float div_Variable=0;
int x=77;
int y=6;
Add_Variable= func_Add(x,y);
Sub_Variable= func_Sub(x,y);
Mul_Variable= func_Mul(x,y);
div_Variable= func_div(x,y);
hi();
printf("The add is %d \n", Add_Variable);
printf("The sub is %d \n", Sub_Variable);
printf("The mul is %d \n", Mul_Variable);
printf("The div is %f \n", div_Variable);

    return 0;
}

int func_Add(int a, int b)
{
    int res=0;
    res=a+b;
    return res;
}
int func_Sub(int a, int b)
{
    int res=0;
    res=a-b;
    return res;
}

int func_Mul(int a, int b)
{
    int res=0;
    res=a*b;
    return res;
}

float func_div(int a, int b)
{
    float res=0;

    res=(float)a/b;

    return res;

 hi();


}
void hi(void)
{
    return printf("I am cool \n");
}

