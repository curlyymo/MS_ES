#include <stdio.h>
#include <stdlib.h>
int* func_cal(int a,int b);
int main()
{

    int x=10;
    int *ptr=&x;
    int **p=&ptr;
    printf("%d",**p);



    return 0;
}
