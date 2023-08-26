#include <stdio.h>
#include <stdlib.h>
#define N 5



typedef struct
{

int stack_top;
int arr[5];

}stc_t;

void stack_init(stc_t* stack_ptr);
void stack_push(stc_t* stack_ptr,int d);
void stack_pob(stc_t* stack_ptr, int* data_ptr);
 void stack_print(stc_t* stack_ptr);

int main(){
int i=0;
int target=0;
stc_t s;
stack_init(&s);
stack_pob(&s, &target);



return 0;
}


void stack_init(stc_t* stack_ptr)
{
  stack_ptr->stack_top=-1;
}

void stack_push(stc_t* stack_ptr,int d)
{
    if(stack_ptr -> stack_top != 4)
    {
            stack_ptr->stack_top++;
    stack_ptr->arr[stack_ptr->stack_top]=d;
    }
    else
    {
        printf("Stack is full\n");
    }
}

 void stack_pob(stc_t* stack_ptr, int* data_ptr)
 {
     if(stack_ptr->stack_top != -1)
     {
     *data_ptr=stack_ptr->arr[stack_ptr->stack_top];
      stack_ptr->stack_top--;
     }
     else
     {
         printf("Stack is Empty\n");
     }
 }

 void stack_print(stc_t* stack_ptr)
 {
   int i;
   printf("The Stack content is :");
   for(i=0;i<=stack_ptr->stack_top;i++)
   {
       printf(" %d \t",stack_ptr->arr[i]);

   }
   printf("\n \n");
 }



