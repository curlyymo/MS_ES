#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int estab;
    char rank;
    char cap_name[20];

} test;
int main()
{
    test no={1991,1,"mo"};
    printf("%d",no.estab);



    return 0;
}
