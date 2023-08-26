#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int tar=0;
    int arr[N]={0,1,2,3,4,5,6,7,8,9};
    int s=0;
    int e=(sizeof(arr)/sizeof(arr[0]))-1;
    int mid=0;
    scanf("%d",&tar);
    while(s<=e){
        mid=(s+e)/2;
        if (tar==arr[mid])
        {
            printf("The number is found in index %d",mid);

        }
        else if (tar>arr[mid])
        {
            s=mid+1;
        }
        else if (tar<arr[mid])
        {
            e=mid-1;
        }

    }

    return 0;
}
