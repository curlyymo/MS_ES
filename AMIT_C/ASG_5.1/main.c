#include <stdio.h>
#include <stdlib.h>

void main()
{
 int x0,x1,x2,x3,x4;
 int num_max,num_min;
 int i_max, i_min;

    printf("Please enter the first value: ");
    scanf("%d",&x0);
    printf("Please enter the second value: ");
    scanf("%d",&x1);
    printf("Please enter the third value: ");
    scanf("%d",&x2);
    printf("Please enter the forth value: ");
    scanf("%d",&x3);
    printf("Please enter the fifth value: ");
    scanf("%d",&x4);

    int arr_1[5]={x0,x1,x2,x3,x4};

    for(int i=0;i<5;i++)
    {
        printf("%d \t",arr_1[i]);
    }



     for (int i = 0; i < 5; i++)
    {
        if (arr_1[i] > num_max)
        {
            num_max = arr_1[i];
            i_max= i;
        }
    }

    printf("\nThe maximum number is %d and its position is %d", num_max, i_max);



     for (int i = 0; i < 5; i++)
    {
        if (arr_1[i] < num_max)
        {
            num_max = arr_1[i];
            i_min= i;
        }
    }

    printf("\nThe minimum  number is %d and its position is %d", num_max, i_min);


}
