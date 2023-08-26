#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int func_pow(int n,int m);
int main()
{int x; int p;int r;
printf("Please enter a number: ");
scanf("%d",&x);
printf("Please enter a power: ");
scanf("%d",&p);
 p= func_pow( x,p);
printf("The result is %d ",p);
    return 0;
}
int func_pow(int n, int m)
{
    return pow(n,m);

}
