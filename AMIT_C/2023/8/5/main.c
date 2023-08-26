#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag=0;
    int arr[10]= {1,2,5,10,2,6,3,7,4,8};
    for(int i=0; i<10; i++)
    {
        if (arr[i]==10)
        {
            printf("The index of number 10 is : %d \n",i);
            flag=1;
        }

    }
    if (flag==1)
    {
        printf("The 10 is here");
    }
    else
        printf("The 10 is not here");
    return 0;
}
