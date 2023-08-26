#include <stdio.h>
#include <stdlib.h>

int main()
{
int x=0;int y=0;
printf("Please enter any number: ");
scanf("%d",&x);
printf("Please enter the number of toggle: ");
scanf("%d",&y);

printf("the number before toggle is : %d \n",x);
x=x^(1<<y);
printf("the number after toggle is : %d \n",x);

    return 0;
}
