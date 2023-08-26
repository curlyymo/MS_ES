#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
if ((num/2*2)==num)
{

    printf("The number is odd =0\n");
    printf("The number is even =1\n");
}
else
{

    printf("The number is odd =1\n");
    printf("The number is even =0\n");
}

    return 0;
}
