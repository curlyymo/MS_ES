#include <stdio.h>
#include <stdlib.h>

int main()
{
unsigned int num1;
unsigned int num2;
printf("Please enter the first number :");
scanf("%d",&num1);
printf("Please enter the second number :");
scanf("%d",&num2);

     if (num1>num2)
     {
        while(num1>=num2)
        {printf("The number is %d\n",num1);
        num1=num1-1;
        }
     }
     else
         while(num2>=num1)
        {printf("The number is %d\n",num2);
        num2=num2-1;
        }

    return 0;
}

