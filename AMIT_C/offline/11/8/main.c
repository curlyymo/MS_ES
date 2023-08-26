#include <stdio.h>
#include <stdlib.h>

void main()
{
char x[10]={1,2,3,4,5,6,7,8,9,10};
printf("%d\n",x);
char (*ptr)[10]=&x;
ptr++;
printf("%d",ptr);

}
