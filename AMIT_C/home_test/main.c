#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=10;
    void *p;
    p=&x;

    printf("The answer is x %d and %d\n" ,*((int*)p);


    return 0;
}
