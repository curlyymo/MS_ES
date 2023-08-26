#include <stdio.h>
#include <stdlib.h>
#define N 5
typedef struct
{
    int top;
    int arr[5];
} stc_q;


void queue_inlit(stc_q* que_ptr);
void en_que(stc_q* que_ptr,int d);
void de_que(stc_q* que_ptr,int*data_ptr );


int main()
{
    int i=0;
    int j=0;
    stc_q s;
    int target;
    queue_inlit(&s);
    printf("The value %d \n,",s.top);
    en_que(&s,10);
    en_que(&s,10);
    en_que(&s,10);
    en_que(&s,10);
    en_que(&s,10);
    de_que(&s,&target);







    return 0;
}
void queue_inlit(stc_q* que_ptr)
{
    que_ptr->top=0;
}

void en_que(stc_q* que_ptr,int d)
{
    if(que_ptr->top>=N)
    {
        printf("The Queue is full");
    }
    else
    {
        que_ptr->arr[que_ptr->top]=d;
        que_ptr->top++;
    }





}

void de_que(stc_q* que_ptr,int*data_ptr )
{
    if (que_ptr->top <= 0)
    {
        printf("The Queue is empty");
    }
    else
    {
        *data_ptr=que_ptr->arr[0];
        for(int i=0; i<que_ptr->top-1; i++)
        {
            que_ptr->arr[i]=que_ptr->arr[i+1];

        }

        que_ptr->top--;
    }


}


