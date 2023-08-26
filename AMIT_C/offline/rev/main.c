#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
} node_t;

typedef struct
{
    struct node_t *top;
} head_t;

void list_in(head_t*ptr);
void list_push(head_t*ptr,int d);
void list_pop(head_t*ptr,int*ent);

void main()
{   int i=0;
    int j=0;
    int target;
    head_t mo;
    list_in(&mo);
    list_push(&mo,3);


}



void list_in(head_t*ptr)
{
    ptr->top=NULL;
}
 void list_push(head_t*ptr,int d)
 {
   node_t* npr= (node_t*)malloc(sizeof(node_t));
   npr->data=d;
   npr->next=ptr->top;
   ptr->top=npr;
 }


 void list_pop(head_t*ptr,int*ent)
 {
     node_t*np=ptr->top;
     *ent=np->data;
     ptr->top=np->next;

 }

