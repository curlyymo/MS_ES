#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
        int data;
       struct node *next
    }   node_t;


typedef struct
{
      node_t *top;
}      head_t;

void list_int(head_t*ptr);
void list_push(head_t*ptr,int d);
void list_pop(head_t*ptr,int*ent);
void list_print(head_t*ptr);


int main()
{
  head_t mo;
  int target;
  list_int(&mo);
  list_push(&mo,15);
  list_push(&mo,20);
  list_print(&mo);
    return 0;
}




void list_int(head_t*ptr)
{
    ptr->top= NULL;
}

void list_push(head_t*ptr,int d)
{
    node_t*nptr=(node_t*)malloc(sizeof(node_t));
    nptr->data=d;
    nptr->next=ptr->top;
    ptr->top=nptr;
}

void list_pop(head_t*ptr,int*ent)
{
  node_t*np=ptr->top;
  *ent=np->data;
  ptr->top=np->next;
}

void list_print(head_t*ptr)
{
 while(ptr->top!=NULL)
 {
     printf("%d\t",ptr->top->data);
     ptr->top=ptr->top->next;

 }
}



