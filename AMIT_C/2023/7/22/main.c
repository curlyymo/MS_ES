#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
x=0;
   while(x<=100)
    {
     if ((x/2)*2==x)
        printf("The number is %d\n ",x);
     x=x+1;
    }
    return 0;
}
