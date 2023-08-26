#include <stdio.h>
int edit(int *a);
int main()
{
    int x;
    printf("Please enter the value of x :");
    scanf("%d",&x);
    printf("Before calling edit x:  %d\n",x);
    edit(&x);


    return 0;
}

int edit(int *a)
{
    *a=*a+1;
       return printf("After calling edit x: %d",*a);
}
