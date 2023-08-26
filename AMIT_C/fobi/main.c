#include <stdio.h>
#include <stdlib.h>
int fab(n);                         // 1st =1 , 2nd =1 , 3rd =3 ,4th=2, 5th=3, 6th=5;
int main()
{
    int n=0;
    int i;
    printf("Please enter a number :");
    scanf("%d",&n);
    printf("The fibonacii series will be: ");
    for (i=0;i<n;i++)
    {
        printf("%d ",fab(i));
    }
    return 0;
}
int fab( n)
{
    if (n==0)     // fibonacci of 0 term is zero
    {
        return 0;
    }
    else if ((n==1)||(n==2))  // fibonacii of 1st and 2nd term is 1;
    {

        return 1;
    }
    else
    {
      return fab(n-1) +fab(n-2);

    }




    }
