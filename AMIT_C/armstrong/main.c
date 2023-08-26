#include <stdio.h>
#include <stdlib.h>

int main()
{ int digit; int s=0; int num; int c;

    printf("Please enter a number:");
    scanf("%d" ,&num);

     c=num;
    while (num>0)
    {
     digit=num%10; // This %10 always represent the last digit;
     s=s+(digit*digit*digit);
     num=num/10; // This used to reduce one tenth and since its int, no float will affect;

    }
    if (c==s)
        printf("This an armstrong number");
        else
        printf("This is not an armstrong number");
    return 0;
}
