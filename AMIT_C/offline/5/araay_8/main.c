#include <stdio.h>
#include <stdlib.h>
typedef unsigned int unit32;
typedef signed int   sint32;
int main()
{
    unit32 x;
    sint32 y;
    int m;
    int n;

    printf("Enter a value:");
    scanf("%d",&x);
    printf("Enter a value: ");
    scanf("%d",&y);
    printf("Enter a value: ");
    scanf("%d",&m);
    printf("Enter a value: ");
    scanf("%d",&n);


    int arr[2][2]= {{x,y},{m,n}};
    for (int r=0; r<2; r++)
    {
        for(int c=0; c<2; c++)
        {
            printf("%d  ",arr[r][c]);


        }
        printf("\n");
    }


    return 0;

}
