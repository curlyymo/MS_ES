#include <stdio.h>
#include <stdlib.h>
#define N 10
void bubble_sort(int arr[],int s);
void main()
{
    int arr[N]= {9,8,7,6,5,4,3,2,1,0};
     bubble_sort(arr,N);

   for (int c=0;c<N;c++)
  {
      printf("% d",arr[c]);
  }
}



void bubble_sort(int arr[],int s)         //int ptr[] //int* ptr
{
    for(int i=0; i<s-1; i++)
    {
        for(int j=0; j<s-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
