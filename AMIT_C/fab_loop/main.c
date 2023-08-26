#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0; int i;
    printf("Please enter a number :");
    scanf("%d",&n);
   int a=0; int b=1; int c;
   printf("The fabonicii numbers are:");
   for (i=0;i<n;i++){
    printf("% d",a);
    c=a+b;
    a=b;
    b=c;

   }


    return 0;
}
