#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *previous;
};
struct node *head = NULL;

struct node *newnodee(int x)
{
    struct node *pointer = (struct node *)malloc(sizeof(struct node));
    pointer->data = x;
    pointer->next = NULL;
    return pointer;
}

void insert(int x)
{
    struct node *newnode = newnodee(x);
    struct node* temp = newn;
    if (temp == NULL)
    {
        temp = newnode;
        return;include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
int data;
struct node *next;
struct node *prev;
};
struct node *head = NULL;

struct node *getnewnode(int x){
struct node *ptr = (struct node *)malloc(sizeof(struct node ));
ptr->data=x;
ptr->next = NULL;
ptr->prev= NULL;
return ptr;
}

void insertatlast(int data){
 struct node *ptr = (struct node *)malloc(sizeof(struct node ));
 ptr->data = data;
 if(head==NULL){
    ptr->next = head;
    head = ptr;
 }
 else{
struct node *p = head;
while(p->next != NULL){
    p= p->next;}

p->next=ptr;
ptr->prev =p;
ptr->next = NULL;}
}


void display(struct node *ptr){

while(ptr!=NULL){

    printf("%d\n",ptr->data);
    ptr=ptr->next;
}
}


int main(){

int i,n,x;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&x);
    insertatlast(x);
}

display(head);
return 0;
}
    }
    newnode->next = temp;
    head = newnode;
}
void display(struct node *pointer)
{

    while (pointer != NULL)
    {

        printf("%d\n", pointer->data);
        pointer = pointer->next;
    }
}

int main()
{

    int i, n, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        insert(x);
    }

    display(head);
    return 0;
}