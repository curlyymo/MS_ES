#include <stdio.h>
#include <stdlib.h>
int func_x(int a, int b)
int main()
{
    int variable=0;
    int x=4; int y=5;
    variable= func_x(x,y);
    printf("The add is %d \n", variable);

    return 0;
}
int func_Add(int a, int b)
{
    int res=0;
    res=a+b;
    return res;
}
