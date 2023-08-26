#include <stdio.h>
#include <stdlib.h>
void reverse(int arr[],int size);
void main()
{

    int arr[5]= {1,2,3,4,5};

    int size = sizeof(arr) / sizeof(arr[0]);
    reverse (arr,size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

}
void reverse(int arr[],int size)
{

    for (int i=0; i<size/2; i++)
    {

        int c=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=c;


    }


}
