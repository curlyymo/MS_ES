
#include <stdio.h>
#include <stdlib.h>
void func_mo(int *a);
int main()
{

    unsigned char z=5 ;
    func_mo(&z);
    printf("The z is %d",z);

}

void func_mo(int *a)
{
    *a=*a+1;
    return;
}
