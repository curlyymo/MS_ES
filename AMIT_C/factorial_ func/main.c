#include <stdio.h>
#include <stdlib.h>
void func_cal(int n, int *f);
int main()
{
   int n=0; int f= 1;
   printf("Please enter a number:");
   scanf("%d",&n);
   func_cal(n,&f);
   printf("The factorial  is : %d",f);
    return 0;
}
void func_cal (int n, int *f)
{


 if (n<0){
    printf("Please enter a positive number");
   }
   else{


   while(n>0){
    *f= *f*n;
    n=n-1;
   }
   }
}
